#include "bst.h"

#include <iostream>
using namespace std;

template<typename Tkey, typename Tdata>
BST<Tkey,Tdata>::BST():root(nullptr){}

template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::insert(Tkey key, Tdata data){ root = _insert(root,key,data); }
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::remove(Tkey key){ root = _remove(root, key);}
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::preOrder(){ _preOrder(root); }
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::inorder(){ _inorder(root); }
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::postOrder(){ _postOrder(root); }


template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BST<Tkey,Tdata>::min(){ return _min(root); }
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BST<Tkey,Tdata>::max(){ return _max(root); }

template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BST<Tkey,Tdata>::search(Tkey key){ return _search(root,key); }
// template<typename Tkey, typename Tdata>
// BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::successor(){}
// template<typename Tkey, typename Tdata>
// BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::predecessor(){}



//==================================================================

template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_insert(BinaryTreeNode<Tkey,Tdata>* current, Tkey key, Tdata data){
    // Return a new node if the sub-tree is empty
    if (current == nullptr) {
        BinaryTreeNode<Tkey,Tdata>* newNode = new BinaryTreeNode<Tkey,Tdata>(key, data);
        return newNode;
    }

    if (key < current->key)
        current->left = _insert(current->left, key, data);
    else
        current->right = _insert(current->right, key, data);

    return current;
}
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_remove(BinaryTreeNode<Tkey,Tdata>* current, Tkey key){
    // Return if the sub-tree is empty
    if (current == nullptr) return current;

    // Find the node to be deleted
    if (key < current->key)
        current->left = _remove(current->left, key);
    else if (key > current->key)
        current->right = _remove(current->right, key);
    else {
        // If the node is with only one child or no child
        if (current->left == nullptr) {
            BinaryTreeNode<Tkey,Tdata>* temp = current->right;
            free(current);
            return temp;
        } else if (current->right == nullptr) {
            BinaryTreeNode<Tkey,Tdata>* temp = current->left;
            free(current);
            return temp;
        }

        // If the node has two children
        BinaryTreeNode<Tkey,Tdata>* temp = _min(current->right);

        // Place the inorder successor in position of the node to be deleted
        current->key = temp->key;
        current->data = temp->data;

        // Delete the inorder successor
        current->right = _remove(current->right, temp->key);
    }
    return current;
}
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::_preOrder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";

    // Traverse left
    _preOrder(current->left);

    // Traverse right
    _preOrder(current->right);
}
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::_inorder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse left
    _inorder(current->left);

    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";

    // Traverse right
    _inorder(current->right);
}
template<typename Tkey, typename Tdata>
void BST<Tkey,Tdata>::_postOrder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse left
    _postOrder(current->left);

    // Traverse right
    _postOrder(current->right); 

    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";
}



template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_min(BinaryTreeNode<Tkey,Tdata>* current){
    if(current==nullptr||current->left==nullptr){
        return current;
    }else{
        return _min(current->left);
    }
}
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_max(BinaryTreeNode<Tkey,Tdata>* current){
    if(current==nullptr||current->right==nullptr){
        return current;
    }else{
        return _max(current->right);
    }
}


template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_search(BinaryTreeNode<Tkey,Tdata>* current, Tkey key){
    // Return if the sub-tree is empty
    if (current == nullptr) return current;
    if (key < current->key) return _search(current->left, key);
    if (key > current->key) return  _search(current->right, key);
    return current;
}
// template<typename Tkey, typename Tdata>
// BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_successor(BinaryTreeNode<Tkey,Tdata>* current){}
// template<typename Tkey, typename Tdata>
// BinaryTreeNode<Tkey,Tdata>* BST<Tkey,Tdata>::_predecessor(BinaryTreeNode<Tkey,Tdata>* current){}






template<typename Tkey, typename Tdata>
BST<Tkey,Tdata>::~BST(){delete root;}
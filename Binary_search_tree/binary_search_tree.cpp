

#include"binary_search_tree.hpp"


template<typename Tkey, typename Tdata>
BinarySearchTree<Tkey,Tdata>::BinarySearchTree():root(nullptr){}

template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::insert(Tkey key, Tdata data){ root = _insert(root,key,data); }
template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::remove(Tkey key){ root = _remove(root, key);}

template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::preOrder(){ _preOrder(root); }
template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::inorder(){ _inorder(root); }
template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::postOrder(){ _postOrder(root); }


template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BinarySearchTree<Tkey,Tdata>::min(){ return _min(root); }
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BinarySearchTree<Tkey,Tdata>::max(){ return _max(root); }

template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>*  BinarySearchTree<Tkey,Tdata>::search(Tkey key){ return _search(root,key); }
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::successor(Tkey key){
    BinaryTreeNode<Tkey,Tdata>* current = search(key);
    if(current->right!=nullptr){
        return _min(current->right);
    }
    BinaryTreeNode<Tkey,Tdata>* par = current->parent;
    while(par!=nullptr&&current==par->right){
        current=par;
        par=par->parent;
    }
    return par;
}
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::predecessor(Tkey key){
    BinaryTreeNode<Tkey,Tdata>* current = search(key);
    if(current->left!=nullptr){
        return _max(current->left);
    }
    BinaryTreeNode<Tkey,Tdata>* par = current->parent;
    while(par!=nullptr&&current==par->left){
        current=par;
        par=par->parent;
    }
    return par;
}



//==================================================================

template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::_insert(BinaryTreeNode<Tkey,Tdata>* current, Tkey key, Tdata data){
    if (current == nullptr) {
        return new BinaryTreeNode<Tkey,Tdata>(key, data);
    }

    if (key < current->key)
    {
        BinaryTreeNode<Tkey,Tdata>* temp = _insert(current->left, key, data);
        current->left =temp;
        temp->parent = current;
    }
    else
    {
        BinaryTreeNode<Tkey,Tdata>* temp = _insert(current->right, key, data);
        current->right = temp;
        temp->parent = current;
    }

    return current;
}
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::_remove(BinaryTreeNode<Tkey,Tdata>* current, Tkey key){
    if (current == nullptr) return current;

    // Find the node to be deleted
    if (key < current->key)
    {
        BinaryTreeNode<Tkey,Tdata>* temp = _remove(current->left, key);
        current->left = temp;
        if(temp!=nullptr){
            temp->parent = current;
        }
    }
    else if (key > current->key)
    {
        BinaryTreeNode<Tkey,Tdata>* temp = _remove(current->right, key);
        current->right = temp;
        if(temp!=nullptr){
            temp->parent = current;
        }
    }
    else {

        // If the node is with only one child or no child
        if (current->left == nullptr) {
            BinaryTreeNode<Tkey,Tdata>* temp = current->right;
            delete current;
            return temp;
        } else if (current->right == nullptr) {
            BinaryTreeNode<Tkey,Tdata>* temp = current->left;
            delete current;
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
void BinarySearchTree<Tkey,Tdata>::_preOrder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";

    // Traverse left
    _preOrder(current->left);

    // Traverse right
    _preOrder(current->right);
}
template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::_inorder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse left
    _inorder(current->left);

    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";

    // Traverse right
    _inorder(current->right);
}
template<typename Tkey, typename Tdata>
void BinarySearchTree<Tkey,Tdata>::_postOrder(BinaryTreeNode<Tkey,Tdata>* current){
    if (current == nullptr) return;
    
    // Traverse left
    _postOrder(current->left);

    // Traverse right
    _postOrder(current->right); 

    // Traverse current
    cout << "( "<< current->key << " , "<< current->data <<" ) ";
}



template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::_min(BinaryTreeNode<Tkey,Tdata>* current){
    if(current==nullptr||current->left==nullptr){
        return current;
    }else{
        return _min(current->left);
    }
}
template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::_max(BinaryTreeNode<Tkey,Tdata>* current){
    if(current==nullptr||current->right==nullptr){
        return current;
    }else{
        return _max(current->right);
    }
}


template<typename Tkey, typename Tdata>
BinaryTreeNode<Tkey,Tdata>* BinarySearchTree<Tkey,Tdata>::_search(BinaryTreeNode<Tkey,Tdata>* current, Tkey key){
    // Return if the sub-tree is empty
    if (current == nullptr) return current;
    if (key < current->key) return _search(current->left, key);
    if (key > current->key) return  _search(current->right, key);
    return current;
}

#pragma once

#include"binary_tree_node.cpp"


template<typename Tkey, typename Tdata>
class BinarySearchTree{
public:
    BinarySearchTree();

    void insert(Tkey key, Tdata data);
    void remove(Tkey key);
    void preOrder();
    void inorder();
    void postOrder();
 
    BinaryTreeNode<Tkey,Tdata>*  min();
    BinaryTreeNode<Tkey,Tdata>*  max();

    BinaryTreeNode<Tkey,Tdata>*  search(Tkey key);
    BinaryTreeNode<Tkey,Tdata>* successor(Tkey key);
    BinaryTreeNode<Tkey,Tdata>* predecessor(Tkey key);



protected:
    BinaryTreeNode<Tkey,Tdata> *root;
 
    BinaryTreeNode<Tkey,Tdata>* _insert(BinaryTreeNode<Tkey,Tdata>* current, Tkey key, Tdata data);
    BinaryTreeNode<Tkey,Tdata>* _remove(BinaryTreeNode<Tkey,Tdata>* current, Tkey key);
    void _preOrder(BinaryTreeNode<Tkey,Tdata>* current);
    void _inorder(BinaryTreeNode<Tkey,Tdata>* current);
    void _postOrder(BinaryTreeNode<Tkey,Tdata>* current);

    BinaryTreeNode<Tkey,Tdata>* _min(BinaryTreeNode<Tkey,Tdata>* current);
    BinaryTreeNode<Tkey,Tdata>* _max(BinaryTreeNode<Tkey,Tdata>* current);
    
    BinaryTreeNode<Tkey,Tdata>* _search(BinaryTreeNode<Tkey,Tdata>* current, Tkey key);

};


#include"binary_search_tree.cpp"
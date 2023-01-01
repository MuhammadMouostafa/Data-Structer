#ifndef BST_H
#define BST_H

#include "../binary_tree_node.cpp"

template<typename Tkey, typename Tdata>
class BST{
public:
    BST();

    void insert(Tkey key, Tdata data);
    void remove(Tkey key);
    void preOrder();
    void inorder();//sorted
    void postOrder();
 
    BinaryTreeNode<Tkey,Tdata>*  min();
    BinaryTreeNode<Tkey,Tdata>*  max();

    BinaryTreeNode<Tkey,Tdata>*  search(Tkey key);
    // BinaryTreeNode<Tkey,Tdata>* successor();
    // BinaryTreeNode<Tkey,Tdata>* predecessor();



    ~BST();
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
    // BinaryTreeNode<Tkey,Tdata>* _successor(BinaryTreeNode<Tkey,Tdata>* current);
    // BinaryTreeNode<Tkey,Tdata>* _predecessor(BinaryTreeNode<Tkey,Tdata>* current);

};


#endif
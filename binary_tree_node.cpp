#ifndef BinaryTreeNode_H
#define BinaryTreeNode_H

template<typename T1, typename T2>
class BinaryTreeNode{
public:
    T1 key;
    T2 data;
    BinaryTreeNode *left,*right,*parent;

    BinaryTreeNode(T1 key,T2 data):key(key),data(data),
    left(nullptr),right(nullptr),parent(nullptr){}

    ~BinaryTreeNode(){
        delete left;
        delete right;
        delete parent;
    }
};

#endif
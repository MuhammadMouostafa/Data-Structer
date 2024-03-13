#pragma once

template<typename Tkey, typename Tdata>
class BinaryTreeNode{
public:
    Tkey key;
    Tdata data;
    BinaryTreeNode *left,*right,*parent;

    BinaryTreeNode(Tkey key,Tdata data):
    key(key),
    data(data),
    left(nullptr),
    right(nullptr),
    parent(nullptr)
    {}
};

#pragma once

#include "../LinkedList/linkedlist_node.hpp"


template<typename T>
class Stack_LinkedList{
public:
    Stack_LinkedList();
    void push(T val);
    void pop();
    T top();
    int size();
    bool empety();
private:
    LinkedList_Node<T> *topPtr;
    int sz;
};

#include"stack_linkedlist.cpp"
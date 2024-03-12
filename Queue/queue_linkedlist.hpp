#pragma once

#include "../LinkedList/linkedlist_node.hpp"

template<typename T>
class Queue_linkedlist{
public:
    Queue_linkedlist();
    void push(T val);
    void pop();
    T front();
    int size();
    bool empety();
private:
    LinkedList_Node<T> *frontPtr, *backPtr;
    int sz;
};

#include"queue_linkedlist.cpp"
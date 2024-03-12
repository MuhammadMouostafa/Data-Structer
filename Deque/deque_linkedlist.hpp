#pragma once

#include"../LinkedList/doubley_linkedlist_node.hpp"

template<typename T>
class Deque_linked_list{
protected:
    Doubley_LinkedList_Node<T> *frontPtr, *backPtr;
    int sz;
public:
    Deque_linked_list();

    void push_front(T val);
    void push_back(T val);

    T front();
    T back();
    
    void pop_front();
    void pop_back();

    int size();
    bool empety();

    ~Deque_linked_list();
};

#include"deque_linkedlist.cpp"
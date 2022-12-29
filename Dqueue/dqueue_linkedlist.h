#ifndef DqueueL_H
#define DqueueL_H

#include "../node.cpp"
#include "dqueue.h"

#include<iostream>

template<typename T>
class DqueueL: public Dqueue<T>{
protected:
    Node<T> *frontPtr, *backPtr;
    using Dqueue<T>::sz;
public:
    DqueueL();

    void push_front(T val);
    void push_back(T val);

    T front();
    T back();
    
    void pop_front();
    void pop_back();

    ~DqueueL();
};

#endif
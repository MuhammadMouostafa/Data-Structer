#ifndef DqueueA_H
#define DqueueA_H

#include "dqueue.h"

#include<iostream>

template<typename T>
class DqueueA: public Dqueue<T>{
protected:
    int frontPtr,backPtr,MAX_SIZE=5;
    T* arr;
    using Dqueue<T>::sz;
public:
    DqueueA();
    void doublicateSize();

    void push_front(T val);
    void push_back(T val);

    T front();
    T back();
    
    void pop_front();
    void pop_back();

    ~DqueueA();
};

#endif
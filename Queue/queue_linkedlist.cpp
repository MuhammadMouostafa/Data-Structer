#include "../dqueue/dqueue_linkedlist.h"

#include<iostream>

template<typename T>
class QueueL: public DqueueL<T>{
public:
    void push(T val){ push_back(val); }
    void pop(){ pop_front(); }
private:
    using DqueueL<T>::push_front;
    using DqueueL<T>::push_back;

    using DqueueL<T>::back;

    using DqueueL<T>::pop_front;
    using DqueueL<T>::pop_back;
};
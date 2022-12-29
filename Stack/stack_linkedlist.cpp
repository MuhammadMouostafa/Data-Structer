#include "../dqueue/dqueue_linkedlist.h"

#include<iostream>

template<typename T>
class StackL: public DqueueL<T>{
public:
    void push(T val){ push_back(val); }
    void pop(){ pop_back(); }
    T top(){return back();}
private:
    using DqueueL<T>::push_front;
    using DqueueL<T>::push_back;
    
    using DqueueL<T>::front;
    using DqueueL<T>::back;

    using DqueueL<T>::pop_front;
    using DqueueL<T>::pop_back;
};
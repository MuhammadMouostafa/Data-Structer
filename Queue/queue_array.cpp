#include "..\dqueue\dqueue_array.h"

#include<iostream>

template<typename T>
class QueueA: public DqueueA<T>{
public:
    void push(T val){ push_back(val); }
    void pop(){ pop_front(); }
private:
    using DqueueA<T>::push_front;
    using DqueueA<T>::push_back;

    using DqueueA<T>::back;

    using DqueueA<T>::pop_front;
    using DqueueA<T>::pop_back;
};

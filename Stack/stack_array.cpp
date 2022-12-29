#include "..\dqueue\dqueue_array.h"

#include<iostream>

template<typename T>
class StackA: public DqueueA<T>{
public:
    void push(T val){ push_back(val); }
    void pop(){ pop_back(); }
    T top(){return back();}
private:
    using DqueueA<T>::push_front;
    using DqueueA<T>::push_back;

    using DqueueA<T>::front;
    using DqueueA<T>::back;

    using DqueueA<T>::pop_front;
    using DqueueA<T>::pop_back;
};

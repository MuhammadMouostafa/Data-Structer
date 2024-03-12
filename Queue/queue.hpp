#pragma once

template<typename T>
class Queue{
public:
    Queue();

    void doublicateSize();

    void push(T val);

    T front();
    
    void pop();

    int size();
    bool empety();

    ~Queue();
private:
    int left,right,MAX_SIZE,sz;
    T* arr;
};

#include"queue.cpp"
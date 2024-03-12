#pragma once


template<typename T>
class Stack{
public:
    Stack();
    void doublicateSize();
    void push(T val);
    void pop();
    T top();
    int size();
    bool empety();
    ~Stack();
private:
    int MAX_SIZE,sz;
    T* arr;
};

#include"stack.cpp"
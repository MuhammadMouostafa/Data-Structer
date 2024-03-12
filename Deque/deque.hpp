#pragma once


template<typename T>
class Deque{
public:
    Deque();

    void doublicateSize();

    void push_front(T val);
    void push_back(T val);

    T front();
    T back();
    
    void pop_front();
    void pop_back();

    int size();
    bool empety();

    ~Deque();
private:
    int left,right,MAX_SIZE,sz;
    T* arr;
};

#include"deque.cpp"
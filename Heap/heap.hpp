#pragma once

template<typename T>
class Heap{
public:
    Heap();

    void push(T val);
    void pop();
    T top();
    int size();
    bool isEmpty();
    ~Heap();
protected:
    int sz,MAX_SIZE=4;
    T* arr;

    void expand();
   
    int getLeftChild(int node);
    int getRightChild(int node);
    int getParent(int node);

    void reHeaoUp(int node);
    void reHeapDown(int node);    
};

#include"heap.cpp"
#ifndef Dqueue_H
#define Dqueue_H



#include<iostream>
using namespace std;

template<typename T>
class Dqueue{
protected:
    int sz;
public:
    Dqueue() : sz(0){}

    int size(){ return sz; }
    bool isEmpty(){ return sz==0; }

    virtual void push_front(T val) = 0;
    virtual void push_back(T val) = 0;

    virtual T front() = 0;
    virtual T back() = 0;
    
    virtual void pop_front() = 0;
    virtual void pop_back() = 0;

    virtual ~Dqueue(){}
};

#endif
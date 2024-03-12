// #pragma once

#include "deque.hpp"

template<typename T>
Deque<T>::Deque():
    MAX_SIZE(4),
    arr(new T(MAX_SIZE)),
    left(0),
    right(0),
    sz(0)
{}

template<typename T>
void Deque<T>::doublicateSize(){
    if(sz!=MAX_SIZE)return;

    T* newArr=new T(MAX_SIZE);
    for(int i=0; i<sz; i++){
        newArr[i]=arr[(left+i)%MAX_SIZE];
    }

    MAX_SIZE*=2;
    arr=new T(MAX_SIZE);
    
    left=0;
    for(right=0; right<sz; right++){
        arr[right]=newArr[right];
    }
    right--;

    delete[] newArr;
}

template<typename T>
void Deque<T>::push_front(T val){
    doublicateSize();

    if(sz){
        left=((left-1)%MAX_SIZE+MAX_SIZE)%MAX_SIZE;
    }else{
        right=left=0;
    }
    arr[left]=val;
    sz++;
}
template<typename T>
void Deque<T>::push_back(T val){
    doublicateSize();

    if(sz){
        right=(right+1)%MAX_SIZE;
    }else{
        right=left=0;
    }
    arr[right]=val;
    sz++;
}

template<typename T>
T Deque<T>::front(){
    return arr[left];
}
template<typename T>
T Deque<T>::back(){
    return arr[right];
}

template<typename T>
void Deque<T>::pop_front(){
    if(sz){
        left=(left+1)%MAX_SIZE;
        sz--;
    }
}
template<typename T>
void Deque<T>::pop_back(){
    if(sz){
        right=((right-1)%MAX_SIZE+MAX_SIZE)%MAX_SIZE;
        sz--;
    }
}

template<typename T>
int Deque<T>::size(){
    return sz;
}

template<typename T>
bool Deque<T>::empety(){
    return size()==0;
}

template<typename T>
Deque<T>::~Deque(){
    delete[] arr;
}

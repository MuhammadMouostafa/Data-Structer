// #pragma once

#include "queue.hpp"

template<typename T>
Queue<T>::Queue():
    MAX_SIZE(4),
    arr(new T(MAX_SIZE)),
    left(0),
    right(0),
    sz(0)
{}

template<typename T>
void Queue<T>::doublicateSize(){
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
void Queue<T>::push(T val){
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
T Queue<T>::front(){
    return arr[left];
}


template<typename T>
void Queue<T>::pop(){
    if(sz){
        left=(left+1)%MAX_SIZE;
        sz--;
    }
}

template<typename T>
int Queue<T>::size(){
    return sz;
}

template<typename T>
bool Queue<T>::empety(){
    return size()==0;
}

template<typename T>
Queue<T>::~Queue(){
    delete[] arr;
}

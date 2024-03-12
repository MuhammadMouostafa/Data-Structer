// #pragma once

#include "stack.hpp"

template<typename T>
Stack<T>::Stack():
    MAX_SIZE(4),
    arr(new T(MAX_SIZE)),
    sz(0)
{}

template<typename T>
void Stack<T>::doublicateSize(){
    if(sz!=MAX_SIZE)return;

    T* newArr=new T(MAX_SIZE);
    for(int i=0; i<sz; i++){
        newArr[i]=arr[i];
    }

    MAX_SIZE*=2;
    arr=new T(MAX_SIZE);
    
    for(int i=0; i<sz; i++){
        arr[i]=newArr[i];
    }

    delete[] newArr;
}


template<typename T>
void Stack<T>::push(T val){
    doublicateSize();
    arr[sz++]=val;
}

template<typename T>
T Stack<T>::top(){
    if(empety()){
        return NULL;
    }
    return arr[sz-1];
}

template<typename T>
void Stack<T>::pop(){
    if(sz){
        sz--;
    }
}

template<typename T>
int Stack<T>::size(){
    return sz;
}

template<typename T>
bool Stack<T>::empety(){
    return size()==0;
}

template<typename T>
Stack<T>::~Stack(){
    delete[] arr;
}

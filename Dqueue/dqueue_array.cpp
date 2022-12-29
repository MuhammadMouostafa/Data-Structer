#include "dqueue_array.h"

template<typename T>
DqueueA<T>::DqueueA() : arr(new T(MAX_SIZE)),frontPtr(0),backPtr(0){}

template<typename T>
void DqueueA<T>::doublicateSize(){
    T* newArr=new T(MAX_SIZE);
    for(int i=0; i<MAX_SIZE; i++){
        newArr[i]=arr[(frontPtr+i)%MAX_SIZE];
    }
    
    frontPtr=0;
    backPtr=MAX_SIZE-1;

    MAX_SIZE*=2;
    arr=new T(MAX_SIZE);
    for(int i=0; i<MAX_SIZE/2; i++){
        arr[i]=newArr[i];
    }
    delete[] newArr;
}

template<typename T>
void DqueueA<T>::push_front(T val){
    if(sz==MAX_SIZE){
        doublicateSize();
    }
     if(sz){
        frontPtr=((frontPtr-1)%MAX_SIZE+MAX_SIZE)%MAX_SIZE;
    }else{
        backPtr=frontPtr=0;
    }
    arr[frontPtr]=val;
    sz++;
}
template<typename T>
void DqueueA<T>::push_back(T val){
    if(sz==MAX_SIZE){
        doublicateSize();
    }
    if(sz){
        backPtr=(backPtr+1)%MAX_SIZE;
    }else{
        backPtr=frontPtr=0;
    }
    arr[backPtr]=val;
    sz++;
}

template<typename T>
T DqueueA<T>::front(){
    return arr[frontPtr];
}
template<typename T>
T DqueueA<T>::back(){
    return arr[backPtr];
}

template<typename T>
void DqueueA<T>::pop_front(){
    if(sz){
        frontPtr=(frontPtr+1)%MAX_SIZE;
        sz--;
    }
}
template<typename T>
void DqueueA<T>::pop_back(){
    if(sz){
        backPtr=((backPtr-1)%MAX_SIZE+MAX_SIZE)%MAX_SIZE;
        sz--;
    }
}

template<typename T>
DqueueA<T>::~DqueueA(){
    delete[] arr;
}

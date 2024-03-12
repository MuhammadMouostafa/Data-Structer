#pragma once

#include"queue_linkedlist.hpp"


template<typename T>
Queue_linkedlist<T>::Queue_linkedlist():
    frontPtr(nullptr),
    backPtr(nullptr),
    sz(0)
{}

template<typename T>
void Queue_linkedlist<T>::push(T val){
    LinkedList_Node<T>* temp = new LinkedList_Node<T>(val);
    if(sz){
        backPtr->next=temp;
    }else{
        frontPtr = temp;
    }
    backPtr = temp;
    sz++;  
}

template<typename T>
T Queue_linkedlist<T>::front(){
    if (frontPtr==nullptr)
    {
        return NULL;
    }
    return frontPtr->data;
}

template<typename T>
void Queue_linkedlist<T>::pop(){
    if(sz){
        LinkedList_Node<T>* temp = frontPtr;
        if(sz==1){
            frontPtr=backPtr=nullptr;
        }else{
            frontPtr = frontPtr->next;
        }
        delete temp;
        sz--;
    }
}

template<typename T>
int Queue_linkedlist<T>::size(){
    return sz;
}

template<typename T>
bool Queue_linkedlist<T>::empety(){
    return size()==0;
}

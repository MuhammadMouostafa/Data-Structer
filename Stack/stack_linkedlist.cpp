#pragma once

#include"stack_linkedlist.hpp"


template<typename T>
Stack_LinkedList<T>::Stack_LinkedList():
    topPtr(nullptr),
    sz(0)
{}

template<typename T>
void Stack_LinkedList<T>::push(T val){
    LinkedList_Node<T>* temp = new LinkedList_Node<T>(val);
    if(sz){
        temp->next=topPtr;
    }
    topPtr = temp;
    sz++;  
}

template<typename T>
T Stack_LinkedList<T>::top(){
    if (topPtr==nullptr)
    {
        return NULL;
    }
    return topPtr->data;
}

template<typename T>
void Stack_LinkedList<T>::pop(){
    if(sz){
        LinkedList_Node<T>* temp = topPtr;
        if(sz==1){
            topPtr=nullptr;
        }else{
            topPtr = topPtr->next;
        }
        delete temp;
        sz--;
    }
}

template<typename T>
int Stack_LinkedList<T>::size(){
    return sz;
}

template<typename T>
bool Stack_LinkedList<T>::empety(){
    return size()==0;
}

#include "dqueue_linkedlist.h"

template<typename T>
DqueueL<T>::DqueueL() : frontPtr(nullptr),backPtr(nullptr){}

template<typename T>
void DqueueL<T>::push_front(T val){
    Node<T>* temp = new Node<T>(val);
    if(sz){
        temp->next=frontPtr;
        frontPtr->prev=temp;
    }else{
        backPtr = temp;
    }
    frontPtr = temp;
    temp=nullptr;  
    sz++;  
}
template<typename T>
void DqueueL<T>::push_back(T val){
    Node<T>* temp = new Node<T>(val);
    if(sz){
        backPtr->next=temp;
        temp->prev=backPtr;
    }else{
        frontPtr = temp;
    }
    backPtr = temp;
    temp=nullptr;  
    sz++;  
}

template<typename T>
T DqueueL<T>::front(){
    if (frontPtr==nullptr)
    {
        return NULL;
    }
    return frontPtr->data;
}
template<typename T>
T DqueueL<T>::back(){
    if (backPtr==nullptr)
    {
        return NULL;
    }
    return backPtr->data;
}

template<typename T>
void DqueueL<T>::pop_front(){
    if(sz){
        if(sz==1){
            frontPtr=backPtr=nullptr;
        }else{
            frontPtr = frontPtr->next;
            frontPtr->prev=nullptr;
        }
        sz--;
    }    
}
template<typename T>
void DqueueL<T>::pop_back(){
    if(sz){
        if(sz==1){
            frontPtr=backPtr=nullptr;
        }else{
            backPtr = backPtr->prev;
            backPtr->next=nullptr;
        }
        sz--;
    }    
}

template<typename T>
DqueueL<T>::~DqueueL(){
    delete frontPtr;
    delete backPtr;
}



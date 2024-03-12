#pragma once

#include "deque_linkedlist.hpp"

template<typename T>
Deque_linked_list<T>::Deque_linked_list() :
    frontPtr(nullptr),
    backPtr(nullptr),
    sz(0)
    {}

template<typename T>
void Deque_linked_list<T>::push_front(T val){
    Doubley_LinkedList_Node<T>* temp = new Doubley_LinkedList_Node<T>(val);
    if(sz){
        temp->next=frontPtr;
        frontPtr->prev=temp;
    }else{
        backPtr = temp;
    }
    frontPtr = temp;
    sz++;  
}
template<typename T>
void Deque_linked_list<T>::push_back(T val){
    Doubley_LinkedList_Node<T>* temp = new Doubley_LinkedList_Node<T>(val);
    if(sz){
        backPtr->next=temp;
        temp->prev=backPtr;
    }else{
        frontPtr = temp;
    }
    backPtr = temp; 
    sz++;  
}

template<typename T>
T Deque_linked_list<T>::front(){
    if (frontPtr==nullptr)
    {
        return NULL;
    }
    return frontPtr->data;
}
template<typename T>
T Deque_linked_list<T>::back(){
    if (backPtr==nullptr)
    {
        return NULL;
    }
    return backPtr->data;
}

template<typename T>
void Deque_linked_list<T>::pop_front(){
    if(sz){
        Doubley_LinkedList_Node<T>* temp = frontPtr;
        if(sz==1){
            frontPtr=backPtr=nullptr;
        }else{
            frontPtr = frontPtr->next;
            frontPtr->prev=nullptr;
        }
        delete temp;
        sz--;
    }    
}
template<typename T>
void Deque_linked_list<T>::pop_back(){
    if(sz){
        Doubley_LinkedList_Node<T>* temp = backPtr;
        if(sz==1){
            frontPtr=backPtr=nullptr;
        }else{
            backPtr = backPtr->prev;
            backPtr->next=nullptr;
        }
        delete temp;
        sz--;
    }    
}

template<typename T>
int Deque_linked_list<T>::size(){
    return sz;
}

template<typename T>
bool Deque_linked_list<T>::empety(){
    return size()==0;
}

template<typename T>
Deque_linked_list<T>::~Deque_linked_list(){
    while(!empety())pop_front();
}



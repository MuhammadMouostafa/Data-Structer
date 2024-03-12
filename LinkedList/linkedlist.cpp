#pragma once

#include"linkedlist.hpp"

template<typename T>
void LinkedList<T>::insertBegin(T data)
{
    LinkedList_Node<T>* temp = new LinkedList_Node<T>(data);
    temp->next = this->head;
    this->head = temp;
}

template<typename T>
void LinkedList<T>::insertEnd(T data)
{
    LinkedList_Node<T>* temp = new LinkedList_Node<T>(data);

    if(this->head == nullptr)
    {
        this->head = temp;
        return;
    }


    LinkedList_Node<T>* current = this->head;

    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = temp;
    return;
}

template<typename T>
bool LinkedList<T>::delete_element(T key)
{
    LinkedList_Node<T>* temp = this->head;
    LinkedList_Node<T>* prev = nullptr;

    if(temp != nullptr && temp->data == key)
    {
        this->head = temp->next;
        delete temp;
        return true;
    }

    while (temp != nullptr && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == nullptr)
    {
        return false;
    }

    prev->next = temp->next;
    delete temp;
    return true;
}

template<typename T>
void LinkedList<T>::print(){

    LinkedList_Node<T>* current = this->head;
    
    while (current != nullptr){
        cout<< current->data <<" ";
        current = current->next;
    }
    cout<<endl;
}


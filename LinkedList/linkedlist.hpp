#pragma once

#include"linkedlist_node.hpp"
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class LinkedList
{
public:
    LinkedList_Node<T>* head = nullptr;

    void insertBegin(T data);

    void insertEnd(T data);

    bool delete_element(T key);

    void print();

};

#include "linkedlist.cpp"

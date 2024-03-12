#pragma once

template<typename T>
class LinkedList_Node
{
public:
    T data;
    LinkedList_Node *next;

    LinkedList_Node():next(nullptr){}
    LinkedList_Node(T value):data(value),next(nullptr){}
};
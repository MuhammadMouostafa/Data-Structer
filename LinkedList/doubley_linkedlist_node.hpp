#pragma once

template<typename T>
class Doubley_LinkedList_Node
{
public:
    T data;
    Doubley_LinkedList_Node<T> *next, *prev;

    Doubley_LinkedList_Node():next(nullptr),prev(nullptr){}
    Doubley_LinkedList_Node(T data):data(data),next(nullptr),prev(nullptr){}
};
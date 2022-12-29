#ifndef Node_H
#define Node_H

template<typename T>
class Node{
public:
    T data;
    Node *prev,*next;

    Node(T value):data(value),prev(nullptr),next(nullptr){}
    ~Node(){
        delete prev;
        delete next;
    }
};

#endif
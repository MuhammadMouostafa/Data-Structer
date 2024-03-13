#include "heap.hpp"

template<typename T>
Heap<T>::Heap() :sz(0),arr(new T(MAX_SIZE)){}

template<typename T>
void Heap<T>::push(T val){
    if(sz==MAX_SIZE){ expand(); }
    arr[sz++]=val;
    reHeaoUp(sz-1);
}
template<typename T>
void Heap<T>::pop(){
    if(sz){
        arr[0]=arr[sz-1];
        sz--;
        reHeapDown(0);
    }
}
template<typename T>
T Heap<T>::top(){
    if(sz==0){
        assert(false);
    }
    return arr[0];
}

template<typename T>
int Heap<T>::size(){
    return sz;
}
template<typename T>
bool Heap<T>::isEmpty(){
    return size()==0;
}

template<typename T>
void Heap<T>::expand(){
    T* newArr=new T(MAX_SIZE);
    for(int i=0; i<sz; i++){
        newArr[i]=arr[i];
    }

    MAX_SIZE*=2;
    arr=new T(MAX_SIZE);
    for(int i=0; i<sz; i++){
        arr[i]=newArr[i];
    }
    delete[] newArr;
}


template<typename T>
int Heap<T>::getLeftChild(int node){
    int l = node * 2 + 1;
    return l>=sz?-1:l;
}
template<typename T>
int Heap<T>::getRightChild(int node){
    int r = node * 2 + 2;
    return r>=sz?-1:r;
}
template<typename T>
int Heap<T>::getParent(int node){
    return node==0?-1:(node-1)/2;
}


template<typename T>
void Heap<T>::reHeaoUp(int node){
    int parent=getParent(node);
    if(parent==-1||arr[parent]<arr[node])return;
    swap(arr[parent],arr[node]);
    reHeaoUp(parent);
}
template<typename T>
void Heap<T>::reHeapDown(int node){
    int selectedchild=getLeftChild(node);
    if(selectedchild==-1)return;
    int rightChild=getRightChild(node);
    if(rightChild!=-1&&arr[rightChild]<arr[selectedchild]){
        selectedchild=rightChild;
    }
    if(arr[node]>arr[selectedchild]){
        swap(arr[selectedchild],arr[node]);
        reHeapDown(selectedchild);
    }

}


template<typename T>
Heap<T>::~Heap(){
    delete[] arr;
}
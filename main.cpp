#include<bits/stdc++.h>

// #include "Heap\heap.cpp"

using namespace std;






// void testHeap(){
// cout<<"=====Test Heap=================================="<<endl;
//     Heap<int>* heap=new Heap<int>();
    
//     while(true){
//         cout<<"--------------------------------"<<endl;
//         cout<<"Enter 1 to insert value to the Heap"<<endl;
//         cout<<"Enter 2 to get the minimum value in the Heap"<<endl;
//         cout<<"Enter 3 to remove the minimum value in the Heap"<<endl;
//         cout<<"Enter 4 to get the size of the Heap"<<endl;
//         cout<<"Enter 5 to check if the Heap is empty"<<endl;
//         cout<<"Enter any other word to exit"<<endl;
//         string s;
//         cin>>s;
//         if(s=="1"){
//             int x;
//             cout<<"enter the value to be inserted in the Heap"<<endl;
//             cin>>x;
//             heap->push(x);
//         }else if(s=="2"){
//             cout<<"Heap->min = "<<heap->top()<<endl;
//         }else if(s=="3"){
//              heap->pop();
//         }else if(s=="4"){
//              cout<<"Heap Size = "<<heap->size()<<endl;
//         }else if(s=="5"){
//             cout<<(heap->isEmpty()?"The Heap is Empty":"The Heap isn't Empty")<<endl;
//         }else { break; }
//     }
//     delete heap;
//     cout<<"============================================"<<endl;
// }

#include"LinkedList/test_linkedlist.cpp"

#include"Queue/test_queue_linkedlist.cpp"
#include"Queue/test_queue.cpp"

#include"Stack/test_stack_linkedlist.cpp"
#include"Stack/test_stack.cpp"

#include"Deque/test_deque_linkedlist.cpp"
#include"Deque/test_deque.cpp"

#include"Binary_search_tree/test_binary_search_tree.cpp"


int main(){
    // testHeap();

    // test_LinkedList();

    // test_Queue_LinkedList();
    // test_Queue();

    // test_stack_linkedlist();
    // test_stack();

    // test_deque_linkedlist();
    // test_deque();

    testBST();
}

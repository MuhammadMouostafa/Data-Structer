#include<bits/stdc++.h>

// #include "BST\bst.cpp"
// #include "Heap\heap.cpp"

using namespace std;




// void testBST(){
// cout<<"=====Test BST=================================="<<endl;
//     BST<int,string>* bst=new BST<int,string>();
    
//     while(true){
//         cout<<"--------------------------------"<<endl;
//         cout<<"Enter 1 to insert value to the BST"<<endl;
//         cout<<"Enter 2 to get the minimum of the BST"<<endl;
//         cout<<"Enter 3 to get the maximum of the BST"<<endl;
//         cout<<"Enter 4 to search the key in the BST"<<endl;
//         cout<<"Enter 5 to remove the the key in the BST"<<endl;
//         cout<<"Enter 6 to do preorder traverse of the BST"<<endl;
//         cout<<"Enter 7 to do inorder traverse of the BST"<<endl;
//         cout<<"Enter 8 to do postorder traverse of the BST"<<endl;
//         cout<<"Enter any other word to exit"<<endl;
//         string s;
//         cin>>s;
//         if(s=="1"){
//             int x;
//             string s;
//             cout<<"enter the key and value to be inserted in the BST"<<endl;
//             cin>>x>>s;
//             bst->insert(x,s);
//         }else if(s=="2"){
//             BinaryTreeNode<int,string>* mn=bst->min();
//             cout<<"BST->min = ("<<mn->key<<","<<mn->data<<")"<<endl;
//         }else if(s=="3"){
//              BinaryTreeNode<int,string>* mx=bst->max();
//             cout<<"BST->max = ("<<mx->key<<","<<mx->data<<")"<<endl;
//         }else if(s=="4"){
//             int x;
//             cout<<"enter the key to search in the BST"<<endl;
//             cin>>x;
//             cout<<"BST["<<x<<"] = "<<bst->search(x)->data<<endl;
//         }else if(s=="5"){
//             int x;
//             cout<<"enter the key to remove from the BST"<<endl;
//             cin>>x;
//             bst->remove(x);
//         }
//         else if(s=="6"){ bst->preOrder(); }
//         else if(s=="7"){ bst->inorder(); }
//         else if(s=="8"){ bst->postOrder(); }
//         else { break; }
//     }
//     delete bst;
//     cout<<"============================================"<<endl;
// }

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


int main(){
    // testBST();
    // testHeap();

    test_LinkedList();

    test_Queue_LinkedList();
    test_Queue();

    test_stack_linkedlist();
    test_stack();

    test_deque_linkedlist();
    test_deque();
}

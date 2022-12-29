#include<bits/stdc++.h>

#include "Dqueue\dqueue_linkedlist.cpp"
#include "Dqueue\dqueue_array.cpp"

#include "Queue\queue_linkedlist.cpp"
#include "Queue\queue_array.cpp"

#include "Stack\stack_linkedlist.cpp"
#include "Stack\stack_array.cpp"

using namespace std;

void testDqueue(){
    cout<<"=====Test Dqueue=================================="<<endl;
    Dqueue<int>* qL=new DqueueL<int>();
    Dqueue<int>* qA=new DqueueA<int>();
    while(true){
        cout<<"--------------------------------"<<endl;

        cout<<"Enter 1 to push front to the dqueue"<<endl;
        cout<<"Enter 2 to push back to the dqueue"<<endl;

        cout<<"Enter 3 to pop the front of the dqueue"<<endl;
        cout<<"Enter 4 to pop the back of the dqueue"<<endl;

        cout<<"Enter 5 to print the front of the dqueue"<<endl;
        cout<<"Enter 6 to print the back of the dqueue"<<endl;

        cout<<"Enter 7 to print the size of the dqueue"<<endl;
        cout<<"Enter 8 to print if the dqueue is empty or not"<<endl;
        cout<<"Enter any other word to exit"<<endl;
        string s;
        cin>>s;
        if(s=="1"){
            int x;
            cout<<"enter the value to be pushed front in the dqueue"<<endl;
            cin>>x;
            qL->push_front(x);
            qA->push_front(x);
        }else if(s=="2"){
            int x;
            cout<<"enter the value to be pushed back in the dqueue"<<endl;
            cin>>x;
            qL->push_back(x);
            qA->push_back(x);
        }else if(s=="3"){
            qL->pop_front();
            qA->pop_front();
        }else if(s=="4"){
            qL->pop_back();
            qA->pop_back();
        }else if(s=="5"){
            cout<<"QueueL Front = "<<qL->front()<<endl; 
            cout<<"QueueA Front = "<<qA->front()<<endl; 
        }else if(s=="6"){
            cout<<"QueueL Back = "<<qL->back()<<endl; 
            cout<<"QueueA Back = "<<qA->back()<<endl; 
        }else if(s=="7"){
            cout<<"QueueL Size = "<<qL->size()<<endl;
            cout<<"QueueA Size = "<<qA->size()<<endl;
        }else if(s=="8"){
            cout<<(qL->isEmpty()?"The QueeuL is Empty":"The QueueL isn't Empty")<<endl;
            cout<<(qA->isEmpty()?"The QueeuA is Empty":"The QueueA isn't Empty")<<endl;
        }else {
            break;
        }
    }
    delete qL;
    delete qA;
    cout<<"============================================"<<endl;
}

void testQueue(){
    cout<<"=====Test Queue=================================="<<endl;
    QueueL<int>* qL=new QueueL<int>();
    QueueA<int>* qA=new QueueA<int>();
    
    while(true){
        cout<<"--------------------------------"<<endl;
        cout<<"Enter 1 to push value to the queue"<<endl;
        cout<<"Enter 2 to pop the front of the queue"<<endl;
        cout<<"Enter 3 to print the front of the queue"<<endl;
        cout<<"Enter 4 to print the size of the queue"<<endl;
        cout<<"Enter 5 to print if the queue is empty or not"<<endl;
        cout<<"Enter any other word to exit"<<endl;
        string s;
        cin>>s;
        if(s=="1"){
            int x;
            cout<<"enter the value to be pushed in the queue"<<endl;
            cin>>x;
            qL->push(x);
            qA->push(x);
        }else if(s=="2"){
            qL->pop();
            qA->pop();
        }else if(s=="3"){
            cout<<"QueueL Front = "<<qL->front()<<endl; 
            cout<<"QueueA Front = "<<qA->front()<<endl; 
        }else if(s=="4"){
            cout<<"QueueL Size = "<<qL->size()<<endl;
            cout<<"QueueA Size = "<<qA->size()<<endl;
        }else if(s=="5"){
            cout<<(qL->isEmpty()?"The QueeuL is Empty":"The QueueL isn't Empty")<<endl;
            cout<<(qA->isEmpty()?"The QueeuA is Empty":"The QueueA isn't Empty")<<endl;
        }else {
            break;
        }
    }
    delete qL;
    delete qA;
    cout<<"============================================"<<endl;
}

void testStack(){
    cout<<"=====Test Stack=================================="<<endl;
    StackL<int>* sL=new StackL<int>();
    StackA<int>* sA=new StackA<int>();
    
    while(true){
        cout<<"--------------------------------"<<endl;
        cout<<"Enter 1 to push value to the stack"<<endl;
        cout<<"Enter 2 to pop the top of the stack"<<endl;
        cout<<"Enter 3 to print the top of the stack"<<endl;
        cout<<"Enter 4 to print the size of the stack"<<endl;
        cout<<"Enter 5 to print if the stack is empty or not"<<endl;
        cout<<"Enter any other word to exit"<<endl;
        string s;
        cin>>s;
        if(s=="1"){
            int x;
            cout<<"enter the value to be pushed in the stack"<<endl;
            cin>>x;
            sL->push(x);
           sA->push(x);
        }else if(s=="2"){
            sL->pop();
           sA->pop();
        }else if(s=="3"){
            cout<<"StackL top = "<<sL->top()<<endl; 
            cout<<"StackA top = "<<sA->top()<<endl; 
        }else if(s=="4"){
            cout<<"StackL Size = "<<sL->size()<<endl;
            cout<<"StackA Size = "<<sA->size()<<endl;
        }else if(s=="5"){
            cout<<(sL->isEmpty()?"The StackL is Empty":"The StackL isn't Empty")<<endl;
            cout<<(sA->isEmpty()?"The StackA is Empty":"The StackA isn't Empty")<<endl;
        }else  {
            break;
        }
    }
    delete sL;
    delete sA;
    cout<<"============================================"<<endl;
}

int main(){
    testDqueue();
    testQueue();
    testStack();

   
}
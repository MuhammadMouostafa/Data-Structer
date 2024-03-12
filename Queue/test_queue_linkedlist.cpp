#pragma once

#include"queue_linkedlist.hpp"
#include<iostream>
#include <stdlib.h>


using namespace std;

void test_Queue_LinkedList(){
    Queue_linkedlist<int> q;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 x : push"<<endl;
        cout<<"2 : pop"<<endl;
        cout<<"3 : front"<<endl;
        cout<<"4: size"<<endl;
        cout<<"5: empety"<<endl;
        cout<<"=======================================================" << endl;
        int choise, data;
        cin>>choise;
        switch (choise)
        {
        case 1:
            cin >> data;
            q.push(data);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            cout<<q.front()<<endl;
            break;
        case 4:
            cout<<q.size()<<endl;
            break;
        case 5:
            cout<<(q.empety()?"empety":"not empety")<<endl;
            break;
        default:
            break;
        }
        cout<<"Enter \"stop\" to stop the test or any key to continue"<<endl;
        string s;
        cin>>s;
        if(s=="stop"){
            break;
        }else{
            system("clear");
        }
    }

}
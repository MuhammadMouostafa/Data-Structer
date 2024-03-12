#pragma once

#include"deque_linkedlist.hpp"
#include<iostream>
#include <stdlib.h>


using namespace std;

void test_deque_linkedlist(){
    Deque_linked_list<int> dq;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 x : push_fron"<<endl;
        cout<<"2 x : push_back"<<endl;
        cout<<"3 : front"<<endl;
        cout<<"4 : back"<<endl;
        cout<<"5 : pop_front"<<endl;
        cout<<"6 : pop_back"<<endl;
        cout<<"7: size"<<endl;
        cout<<"8: empety"<<endl;
        cout<<"=======================================================" << endl;
        int choise, data;
        cin>>choise;
        switch (choise)
        {
        case 1:
            cin >> data;
            dq.push_front(data);
            break;
        case 2:
            cin >> data;
            dq.push_back(data);
            break;
        case 3:
            cout<<dq.front()<<endl;
            break;
        case 4:
            cout<<dq.back()<<endl;
            break;
        case 5:
            dq.pop_front();
            break;
        case 6:
            dq.pop_back();
            break;
        case 7:
            cout<<dq.size()<<endl;
            break;
        case 8:
            cout<<(dq.empety()?"empety":"not empety")<<endl;
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
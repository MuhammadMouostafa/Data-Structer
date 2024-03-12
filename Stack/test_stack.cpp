#pragma once

#include"stack.hpp"
#include<iostream>
#include <stdlib.h>


using namespace std;

void test_stack(){
    Stack<int> st;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 x : push"<<endl;
        cout<<"2 : pop"<<endl;
        cout<<"3 : top"<<endl;
        cout<<"4: size"<<endl;
        cout<<"5: empety"<<endl;
        cout<<"=======================================================" << endl;
        int choise, data;
        cin>>choise;
        switch (choise)
        {
        case 1:
            cin >> data;
            st.push(data);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout<<st.top()<<endl;
            break;
        case 4:
            cout<<st.size()<<endl;
            break;
        case 5:
            cout<<(st.empety()?"empety":"not empety")<<endl;
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
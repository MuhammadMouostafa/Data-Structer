#pragma once

#include"linkedlist.hpp"

#include<iostream>
#include <stdlib.h>


using namespace std;

void test_LinkedList(){
    LinkedList<int> llst;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 x : insert x at the begining of the liset"<<endl;
        cout<<"2 x : insert x at the end of the liset"<<endl;
        cout<<"3 x : delete the first occurence of x in the liset"<<endl;
        cout<<"Enter any number to print all the elements of the liset"<<endl;
        cout<<"=======================================================" << endl;
        int choise, data;
        cin>>choise;
        switch (choise)
        {
        case 1:
            cin >> data;
            llst.insertBegin(data);
            break;
        case 2:
            cin >> data;
            llst.insertEnd(data);
            break;
        case 3:
            cin >> data;
            llst.delete_element(data);
            break;
        default:
            llst.print();
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

#include"trie.hpp"

#include<iostream>
#include <stdlib.h>


using namespace std;

void test_Trie(){
    Trie trie;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 str: insert"<<endl;
        cout<<"2 str: search str"<<endl;
        cout<<"3 str: search prefix"<<endl;
        cout<<"=======================================================" << endl;
        int choise;
        char key[100];
        cin >> choise;
        switch (choise)
        {
        case 1:
            cin >> key;
            trie.insert(key);
            break;
        case 2:
            cin >> key;
            cout<<trie.wordExists(key)<<endl;
            break;
        case 3:
            cin >> key;
            cout<<trie.prefixExists(key)<<endl;
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
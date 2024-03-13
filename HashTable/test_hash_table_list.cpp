
#include"hash_table_list.hpp"

#include<iostream>
#include <stdlib.h>


using namespace std;

void test_HashTable_List(){
    HashTable_List mp;

    while(true){
        cout<<"=======================================================" << endl;
        cout<<"Enter your choise: "<<endl;
        cout<<"1 key val: insert"<<endl;
        cout<<"2 key: remove"<<endl;
        cout<<"3 key: search"<<endl;
        cout<<"4: size"<<endl;
        cout<<"5: empety"<<endl;
        cout<<"=======================================================" << endl;
        int choise, data;
        string key;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cin >> key >> data;
            mp.insert(key,data);
            break;
        case 2:
            cin >> key;
            mp.remove(key);
            break;
        case 3:
            cin >> key;
            cout<<mp.search(key)<<endl;
            break;
        case 4:
            cout<<mp.size()<<endl;
            break;
        case 5:
            cout<<(mp.isEmpety()?"empety":"not empety")<<endl;
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
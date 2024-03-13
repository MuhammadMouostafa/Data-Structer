#pragma once

#include<bits/stdc++.h>

using namespace std;

class HashTable_List
{
private:
    int sz,TABLE_SIZE;
    vector<vector<pair<string,int>>> table;


public:
    HashTable_List();
    
    void insert(string key, int val);
    void remove(string key);
    int search(string key);

    int getHash(string key);

    int size();
    bool isEmpety();
};



#include"hash_table_list.cpp"

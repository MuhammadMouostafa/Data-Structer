#include"hash_table_list.hpp"


HashTable_List::HashTable_List():
 sz(0),
 TABLE_SIZE(200),
 table(vector<vector<pair<string,int>>>(TABLE_SIZE))
 {}

void HashTable_List::insert(string key, int val)
{
    int index=getHash(key);
    for(pair<string,int> &cur:table[index]){
        if(cur.first==key){
            cur.second=val;
            return;
        }
    }
    table[index].emplace_back(key,val);
}
void HashTable_List::remove(string key)
{
    int index=getHash(key);
    for(int i=0; i<table[index].size(); i++){
        if(table[index][i].first==key){
            while(i+1<table[index].size()){
                swap(table[index][i],table[index][i+1]);
                i++;
            }
            table[index].pop_back();
            return;
        }
    }
}
int HashTable_List::search(string key)
{
    int index=getHash(key);
    for(pair<string,int> &cur:table[index]){
        if(cur.first==key){
            return cur.second;
        }
    }
    return NULL;
}

int HashTable_List::getHash(string key)
{
    int val=0;
    for(char i:key){
        val*=128;
        val+=i;
        val%=TABLE_SIZE;
    }
    return val;
}



int HashTable_List::size(){
    return sz;
}
bool HashTable_List::isEmpety(){
    return size()==0;
}


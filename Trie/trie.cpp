#include"trie.hpp"
#include<bits/stdc++.h>

Trie::Trie():isLeaf(false)
{
    memset(childs,0,sizeof childs);
}

void Trie::insert(char *str)
{
    if(*str=='\0'){
        isLeaf=true;
        return;
    }

    int cur=*str-'a';

    if(childs[cur]==nullptr){
        childs[cur] = new Trie();
    }

    childs[cur]->insert(str+1);
}
bool Trie::wordExists(char *str)
{
    if(*str=='\0'){
        return isLeaf;
    }

    int cur=*str-'a';

    if(childs[cur]==nullptr){
        return false;
    }

    return childs[cur]->wordExists(str+1);
}
bool Trie::prefixExists(char *str)
{
    if(*str=='\0'){
        return true;
    }

   int cur=*str-'a';

    if(childs[cur]==nullptr){
        return false;
    }

    return childs[cur]->prefixExists(str+1);
}

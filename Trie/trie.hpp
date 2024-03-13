#pragma once

const int MAX_CHAR = 26;
class Trie
{
private:
    Trie* childs[MAX_CHAR];
    bool isLeaf;

public:
    Trie();

    void insert(char *str);
    bool wordExists(char *str);
    bool prefixExists(char *str);

};




#include"trie.cpp"
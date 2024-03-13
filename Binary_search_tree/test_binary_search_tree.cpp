#pragma once

#include"binary_search_tree.hpp"

#include<iostream>
#include <stdlib.h>
using namespace std;


void testBST(){
cout<<"=====Test BST=================================="<<endl;
    BinarySearchTree<int,string>* bst=new BinarySearchTree<int,string>();
    
    while(true){
        cout<<"--------------------------------"<<endl;
        cout<<"Enter 1 to insert value to the BST"<<endl;
        cout<<"Enter 2 to get the minimum of the BST"<<endl;
        cout<<"Enter 3 to get the maximum of the BST"<<endl;
        cout<<"Enter 4 to search the key in the BST"<<endl;
        cout<<"Enter 5 to remove the the key in the BST"<<endl;
        cout<<"Enter 6 to do preorder traverse of the BST"<<endl;
        cout<<"Enter 7 to do inorder traverse of the BST"<<endl;
        cout<<"Enter 8 to do postorder traverse of the BST"<<endl;
        cout<<"Enter 9 to print successor of key"<<endl;
        cout<<"Enter 10 to print predecessor of key"<<endl;
        cout<<"Enter any other word to exit"<<endl;
        string s;
        cin>>s;
        if(s=="1"){
            int x;
            string s;
            cout<<"enter the key and value to be inserted in the BST"<<endl;
            cin>>x>>s;
            bst->insert(x,s);
        }else if(s=="2"){
            BinaryTreeNode<int,string>* mn=bst->min();
            if(mn!=nullptr){
                cout<<"BST->min = ("<<mn->key<<","<<mn->data<<")"<<endl;
            }
        }else if(s=="3"){
             BinaryTreeNode<int,string>* mx=bst->max();
             if(mx!=nullptr){
                cout<<"BST->max = ("<<mx->key<<","<<mx->data<<")"<<endl;
             }
        }else if(s=="4"){
            int x;
            cout<<"enter the key to search in the BST"<<endl;
            cin>>x;
            BinaryTreeNode<int,string>* res= bst->search(x);
            if(res!=nullptr){
                cout<<"BST["<<x<<"] = "<<res->data<<endl;
            }
        }else if(s=="5"){
            int x;
            cout<<"enter the key to remove from the BST"<<endl;
            cin>>x;
            bst->remove(x);
        }
        else if(s=="6"){ bst->preOrder(); }
        else if(s=="7"){ bst->inorder(); }
        else if(s=="8"){ bst->postOrder(); }
        else if(s=="9"){
            int x;
            cout<<"enter the key to findits successor in the BST"<<endl;
            cin>>x;
            BinaryTreeNode<int,string>* successor= bst->successor(x);
            if(successor!=nullptr){
                cout<<"successor of "<<x<<"is : ("<<successor->key<<","<<successor->data<<")"<<endl;
            }
        }else if(s=="10"){
            int x;
            cout<<"enter the key to find its predecessor in the BST"<<endl;
            cin>>x;
            BinaryTreeNode<int,string>* predecessor= bst->predecessor(x);
            if(predecessor!=nullptr){
                cout<<"predecessor of "<<x<<"is : ("<<predecessor->key<<","<<predecessor->data<<")"<<endl;
            }
        }
        else { break; }
    }
    delete bst;
    cout<<"============================================"<<endl;
}
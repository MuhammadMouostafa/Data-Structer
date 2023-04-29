#include <bits/stdc++.h>

using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
}

struct monotonicStack{
    stack<pair<int,int>> stk;
    void push(int val){
        stk.emplace(val,min(val,get_min()));
    }
    void pop(){
        stk.pop();
    }
    int top(){
        return stk.top().first;
    }
    int get_min(){
        if(stk.empty())return INT_MAX;
        return stk.top().second;
    }
    int size(){
        return stk.size();
    }
    bool empty(){
        return stk.empty();
    }
};
struct monotonicQueue{
    monotonicStack psh,pp;

    void push(int val){
        psh.push(val);
    }
    void pop(){
        move();
        pp.pop();
    }
    int front(){
        move();
        return pp.top();
    }
    int get_min(){
        return min(psh.get_min(),pp.get_min());
    }
    int size(){
        return psh.size()+pp.size();
    }
    bool empty(){
        return psh.empty()&&pp.empty();
    }
    void move(){
        if(pp.empty()){
            while(psh.size()){
                pp.push(psh.top());
                psh.pop();
            }
        }
    }
};
void work(const int &T){
    monotonicQueue mntQueue;
    mntQueue.push(5);
    mntQueue.push(3);
    mntQueue.push(6);
    cout<<"Front "<<mntQueue.front()<<endl;
    cout<<"Min "<<mntQueue.get_min()<<endl;
    mntQueue.pop();
    mntQueue.pop();
    mntQueue.push(7);
    cout<<"Front "<<mntQueue.front()<<endl;
    cout<<"Min "<<mntQueue.get_min()<<endl;
    mntQueue.push(2);
    cout<<"Front "<<mntQueue.front()<<endl;
    cout<<"Min "<<mntQueue.get_min()<<endl;

    //output
    /*
        Front 5
        Min 3
        Front 6
        Min 6
        Front 6
        Min 2            
    */

}
int main()
{
    file();
    

    int T = 1;
    // cin >> T;
    for(int t=1; t<=T; t++)work(t);
}

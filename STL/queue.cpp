#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1); //1
    q.push(2); //1,2
    q.emplace(4);//1,2,4
    cout<<q.front()<<endl;//1
    cout<<q.back()<<endl;//4

    q.back()+=5;//1,2,9
    cout<<q.back()<<endl;//9

    q.pop(); // 1pop bcoz fifo 2,9
    cout<<q.front();//2





}

int main(){
    explainQueue();
    
}

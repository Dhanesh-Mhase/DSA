//print lineraly from 1 to n but backtracking ;

#include<iostream>
using namespace std;

void linear(int i,int n){
    if(i<1) return;
    linear(i-1,n);
    cout<<i;
   
}
int main(){
    int n;
    cin>>n;
    linear(n,n);
}
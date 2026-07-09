//print lineraly from n to 1 but backtracking ;

#include<iostream>
using namespace std;

void linear(int i,int n){
    if(i>n) return;
    linear(i+1,n);
    cout<<i;
   
}
int main(){
    int n;
    cin>>n;
    linear(1,n);
}
//print lineraly from 1 to n ;

#include<iostream>
using namespace std;

void linear(int i,int n){
    if(i>n) return;
    cout<<i;
    linear(i+1,n);

}
int main(){
    int n;
    cin>>n;
    linear(1,n);
}
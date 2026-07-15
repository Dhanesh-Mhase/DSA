#include<bits/stdc++.h>
using namespace std;
int index(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }    
    }
    return -1;
}

int main(){
    int arr[]={6,4,8,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>> target;
    cout<<index(arr,n,4);  
}
#include<bits/stdc++.h>
using namespace std;
int arr[100000000];
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //precompute
    int hash[13]={0}; //assigns 0 to all indexes
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int num;
    cin>>num;
    cout<<hash[num];
    
}


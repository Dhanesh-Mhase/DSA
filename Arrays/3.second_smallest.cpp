#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Optimal
    int smallest=arr[0];
    int ssmallest=INT_MAX;

    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }  
        else if (arr[i]!=smallest && arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    cout<<ssmallest;
}
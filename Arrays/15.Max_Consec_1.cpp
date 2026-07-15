#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxi;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int len=0;

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         if(sum==target) len=max(len,j-i+1);
    //     }
    // }
    // cout<<len;    

    //optimized to 
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==target) len=max(len,j-i+1);
    //     }
    // }
    // cout<<len;


    //optimal:two pointer
    int left=0;
    int right=0;
    int sum=0;
    int maxLen=0;

    while(right<n){
        sum+=arr[right];
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;

    }
    cout<<maxLen;



}

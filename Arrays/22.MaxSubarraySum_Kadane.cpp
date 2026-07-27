#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int maxi=INT_MIN;

    //Brute
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         maxi=max(maxi,sum);            
    //     }
    // }
    // cout<<maxi;

    
    //Optimal:Kadane's algo
    int sum=0 ;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(maxi<0) cout<<0;
    else cout<<maxi;

}
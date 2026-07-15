#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute:Linear search
    // for(int i=0;i<n;i++){
    //     int nums=arr[i];
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==nums){
    //             count++;
    //         }

    //     }
    //     if(count==1) cout<<nums;
    // }

    

    // Better:Hash Map

    //Finding the size of hash[]
    // int maxi=0;
    // for(int i=0;i<n;i++){
    //     maxi=max(maxi,arr[i]);
    // }

    // int hash[maxi+1]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }
    // int m=sizeof(hash)/sizeof(hash[0]);

    // for(int i=0;i<m;i++){
    //     if(hash[i]==1) cout<<i;
    // }



    //Optimal
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    cout<<XOR;


}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute:check if every elem is present by linear search
    // for(int i=1;i<=n;i++){
    //     bool flag=0;
    //     for(int j=0;j<n-1;j++){
    //         if(arr[j]==i){
    //             flag=1;
    //             break; //found the number
    //         }
    //     }
    //     if(flag==0) cout<<i;
    // }


    // //Better:Hash Map occurence freq=1 missing =0;
    // int hash[n+1]={0};
    // for(int i=0;i<n-1;i++){
    //     hash[arr[i]]=1;
    // }

    // for(int i=1;i<=n;i++){
    //     if(hash[i]==0) cout<<i;
    // }


    //Optimal 1:Sum
    int req_sum=(n+1)*(n+2)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Missing number:"<<req_sum-sum;

    //Optimal 2:XOR

    


}
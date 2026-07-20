#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);


    //Brute
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==arr[i]){
    //             count++;
    //         }
    //     }
    //     if(count>n/2) {
    //         cout<<arr[i];
    //         break; 
    //     }
    // }


    // //Better: Hashing
    // map <int,int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    // for(auto it: mpp){
    //     if(it.second>n/2){
    //         cout<<it.first;
    //         break;
    //     }
    // }
    // return -1;


    //Optimal:Moore's voting algorithm
    //Steps:Moore's algo + verify if el is majority or not

    //Moore's algo
    int count=0;
    int el;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++;
        }
        else count--;
    }

    
    // verify if count el>n/2
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el) count1++;
    }
    if(count1>(n/2)) cout<<el;
    else cout<<"No majority element";
}
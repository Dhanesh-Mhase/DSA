#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return true;
    }
    return false;
}

int main(){
    int arr[]={102,4,100,1,101,3,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute
    // int longest=0;
    // for(int i=0;i<n;i++){
    //     int x=arr[i];
    //     int count=1;
        
    //     while(linearSearch(arr,n,x+1)){
    //         x++;
    //         count++;
    //     }
        
    // longest=max(longest,count);

    // }
    // cout<<longest;
    

    //Better
    sort(arr,arr+n);
    int longest=1;
    int count=0;
    int lastSmaller=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmaller){
            count++;
            lastSmaller=arr[i];
        }
        else if(lastSmaller!=arr[i]){
            count=1;
            lastSmaller=arr[i];
        }
        longest=max(longest,count);
    }
    cout<<longest;





  
}
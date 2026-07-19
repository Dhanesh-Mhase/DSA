#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    // //Brute
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++) cout<<arr[i];

    //Better
    // int cnt_0=0;
    // int cnt_1=0;
    // int cnt_2=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) cnt_0++;
    //     else if(arr[i]==1) cnt_1++;
    //     else cnt_2++;
    // }

    // //insertion
    // for(int i=0;i<cnt_0;i++) arr[i]=0;
    // for(int i=cnt_0;i<cnt_0+cnt_1;i++) arr[i]=1;
    // for(int i=cnt_0+cnt_1;i<n;i++) arr[i]=2;

    // for(int i=0;i<n;i++) cout<<arr[i];


    //Better Dutch National Flag
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1){
            mid++;
        }

        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
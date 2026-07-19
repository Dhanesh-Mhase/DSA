#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int target=14;

    // //Brute
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(i==j) continue;
    //         if(arr[i]+arr[j]==target){
    //             cout<<i<<" "<<j;
    //             return 0;
    //         }
    //     }
    // } 


    //Hashing
    // map <int,int> mpp;
    // for(int i=0;i<n;i++){
    //     int a=arr[i];
    //     int more=target-a;
    //     if(mpp.find(more)!=mpp.end()){
    //         cout<<"YES";
    //     }
    //     mpp[a]=i;
    // }


    //Two pointer
    sort(arr,arr+n);
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<"Found";
            return 0;
        } 
        else if(sum<target)  left++;
        else right --; 
        
    }    

}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,2,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Brute: Sort the array and go to n-2 and check if equal to larger or not;
    // sort(arr,arr+n);
    // int second_largest=arr[n-2];
    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]!=arr[n-1]){
    //         second_largest=arr[i];
    //         break;
    //     }
    // }
    // cout<<second_largest;


    //Better
    // int largest=arr[0];
    // int second_largest=-1;
    // for(int i=1;i<n;i++){
    //     if(arr[i]>largest) largest=arr[i];    
    // }

    // for(int i=0;i<n;i++){
    //     if(arr[i]>second_largest && arr[i]!=largest){
    //         second_largest=arr[i];        
    //     } 
    // }
    // cout<<second_largest;



    //Optimal
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }  
        else if (arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    cout<<slargest;

    

    



    
  
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,2,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Brute: Sort the array and retrun arr[n-1];
    
    //Better
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest=arr[i];    
    }
    cout<<largest;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute
    // vector <int> temp ;

    // //push non zero into temp
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         temp.push_back(arr[i]);
    //     }
    // }

    // //copy non zero into original array
    // for(int i=0;i<temp.size();i++){
    //     arr[i]=temp[i];
    // } 

    // //Copy the remaining zero
    // //nz for iteration start 
    // int nz=temp.size();
    // // cout<<nz;
    
    // for(int i=nz;i<n;i++){
    //     arr[i]=0;
    // }

    // for(int i=0;i<n;i++) cout<<arr[i];


    //Optimal:Two pointer approach
    //j-first non zero , i-at j+1
    //swap if non zero and i++,j++
    
    //First 0 find
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    //main algo
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i];

}
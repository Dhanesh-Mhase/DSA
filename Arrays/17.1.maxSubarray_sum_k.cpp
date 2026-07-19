#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==target){
                len=max(len,j-i+1);
            }
        } 
    }
    cout<<len;
    
}

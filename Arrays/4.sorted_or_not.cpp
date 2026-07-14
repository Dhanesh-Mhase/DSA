#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,2,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag=true;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            flag=true;
        }
        else flag=false;
    }
    cout<<flag;

}
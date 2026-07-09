//o(n^2) basic wala first

#include<bits/stdc++.h>
using namespace std;

int freq(int num,int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==num) count+=1;
    }
    return count;

}
int main(){
    int arr[]={1,2,3,1,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<freq(4,arr,size);
}
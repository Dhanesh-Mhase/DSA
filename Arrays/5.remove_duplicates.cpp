#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    //Brute nlogn
    // set <int> st;
    // for(int i=0;i<n;i++){
    //     st.insert(arr[i]);
    // }

    // for(auto it :st){
    //     cout<<it<<endl;
    // }
    // cout<<"Total unique elements:"<<st.size();


    //Optimal: Two pointer TC:O(n) SC:O(1) 
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(auto it:arr) cout<<it<<" ";
    cout<<endl<<i+1;


}
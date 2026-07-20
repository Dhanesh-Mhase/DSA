#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute
    // //have pos[] ,neg[];
    // //pos->arr[2*i]
    // //neg->arr[2*i+1]

    // vector<int> pos;
    // vector<int> neg;

    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         neg.push_back(arr[i]);
    //     }
    //     else{
    //         pos.push_back(arr[i]);
    //     }
    // }

    // for(int i=0;i<n/2;i++){
    //     arr[2*i]=pos[i];
    //     arr[2*i+1]=neg[i];
    // }

    // for(int i=0;i<n;i++) cout<<arr[i];


    //Optimal
    vector <int> ans(n,0);
    int posIndex=0;
    int negIndex=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }

    for(auto it:ans) cout<<it<<" ";

}



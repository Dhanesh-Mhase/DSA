# include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,22,12,3,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    // //Brute
    // vector <int> ans;
    // for(int i=0;i<n;i++){
    //     int leader=true;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]){
    //             leader=false;
    //             break;
    //         }
    //     }
    //     if(leader==true) ans.push_back(arr[i]);
    // }

    // for(auto it:ans) cout<<it;


    //Optimal
    vector<int> ans;
    int maxi=INT_MIN;

    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }

    for(auto it:ans) cout<<it<<" ";
}    
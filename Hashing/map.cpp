#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    //itrating the mpp
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    

}

//we will get the answer right after the number
//numbers are stored in sorted manner in map 
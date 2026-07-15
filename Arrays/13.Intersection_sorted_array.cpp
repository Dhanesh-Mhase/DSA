#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[]={1,2,2,3,3,4,5,6};
    int n1=sizeof(a)/sizeof(a[0]);
    int b[]={2,3,3,5,6,6,7};
    int n2=sizeof(b)/sizeof(b[0]);

    //Brute
    // vector <int> ans;
    // int visited[n2]={0};
    
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         if(a[i]==b[j] && visited[j]==0){
    //             ans.push_back(a[i]);
    //             visited[j]=1;
    //             break;
    //         }
    //         if(b[j]>a[i]) break;
    //     }
    // }
    // for(auto it: ans) cout<<it;


    //Optimal
    int i=0;
    int j=0;
    
    vector <int> ans;
    while(i<n1 &&j<n2){
        if(a[i]<b[j]) i++;
        if(b[j]<a[i]) j++;
        
        //equal/intersection condition
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(auto it: ans) cout<<it;



}
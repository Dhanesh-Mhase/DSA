#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //for A-Z +a-z use 256 size array and for lower case only use char-'a'
    //precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    //fetch
    char q;
    cin>>q;
    cout<<hash[q]<<endl;


}
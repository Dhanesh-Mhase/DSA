//map key and value pair 
//key can be anything

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void explainMap(){
    map <int,int> mpp;
    map<pair<int,int>,int> mpq;

    mpp[1]=2;  //key -1 value-2
    mpp.emplace(3,1);
    mpp.insert({2,4});

    //everything will be stored in sorted manner
    //[{1,2}{2,4}{3,1}]

    mpq[{2,3}]=10;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]<<endl; //key mentioned so it will return value
    cout<<mpp[3]<<endl;

    cout<<mpp[5]; //0



}

int main(){
    explainMap();

}
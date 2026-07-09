#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    // vector <int> v;

    // // v.push_back(1);
    // // v.emplace_back(2); //similar to pushback but faster

    // // vector<pair<int,int>> v2;
    // // v2.push_back({1,2}); //pushback madhe curly {} braces madhe takycha
    // // v2.emplace_back(1,2); //direct no need of {}

    // // vector<int> v3(5,100);// [100,100,100,100,100]
    // // vector<int> v4(5);// just a vector of 5 size

    // // vector<int> v5(5,20);
    // // vector<int> v6(v5);

    // //traverse
    // vector<int>::iterator it=v.begin();
    // it++;
    // cout<<*(it)<<" ";

    // it=it+2;
    // cout<<*(it)<<" ";

    // vector<int>::iterator it=v.end(); //point rught of last element if [20,40] then after 40 do -- then we can have 40
    // // vector<int>::iterator it=v.rend();
    // // vector<int>::iterator it=v.rbegin();
    
    // for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
    //     cout<<*(it);
    // }

    // for(auto it=v.begin(); it!=v.end();it++){
    //     cout<<*(it);
    // }

    // //for each loop
    // for(auto it: v){
    //     cout<<it<<" ";
    // }

    // //{10,20,12,23}
    // v.erase(v.begin()+1)
    // //20 will be deleted {10,12,23}

    // //{10,20,30,40,50}  final{10,20,50}
    // // v.erase(v.begin()+2,v.begin()+4) last one is not included


    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,5); // {300,5,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,5,100,100}


    v.pop_back();
    v.clear(); //erases the entire vector
    v.empty(); //check if the vector is empty false if not

}

int main(){
    explainVector();
}
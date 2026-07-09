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

    int maxFreq=INT_MIN;
    int minFreq=INT_MAX;

    int maxElement,minElement;

    for(auto it:mpp){
        if(it.second>maxFreq){
            maxFreq=it.second;
            maxElement=it.first;
        }

        if(it.second<minFreq){
            minFreq=it.second;
            minElement=it.first;
        }

    }

    cout << "Highest Frequency: " << maxElement << " -> " << maxFreq << endl;
    cout << "Lowest Frequency: " << minElement << " -> " << minFreq << endl;
    
    /*
    only limitation is that only single element for
    max and min freq will be printed even though
    there exist numbers with same highest freq
    */
}


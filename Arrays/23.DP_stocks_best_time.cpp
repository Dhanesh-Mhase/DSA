#include<bits/stdc++.h>
using namespace std;
int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(prices[0]);

    int mini=prices[0];
    int maxProfit=0;

    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,prices[i]);
    }

    cout<<maxProfit;
}
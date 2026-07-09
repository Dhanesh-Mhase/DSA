#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){ cout<<i<<" ";
        if((n/i)!=i) cout<<(n/i)<<" ";//for 6 case ie 36=6*6 theres houldnt be two 6
        }
    }
}
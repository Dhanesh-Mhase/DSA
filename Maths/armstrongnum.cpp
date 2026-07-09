#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n;
    int sum=0;
    if(n == 0){
        cout << "Armstrong number";
        return 0;
    }
    int digits=(int)(log10(n)+1);
    //armstrong only for 3 digits
    //if we have to do for all use pow(ld,digits)
    while(n>0){
        int ld=n%10;
        sum+=(int)pow(ld,digits);
        n/=10;
    }
    if(t==sum) cout<<"Armstrong number";
    else cout<<"Not a armstrong number";
}
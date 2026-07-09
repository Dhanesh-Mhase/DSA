#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    int t=n;
    while(n>0){
        int ld=n%10;
        rev*=10;
        rev+=ld;
        n/=10;
    }
    if(t==rev) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}
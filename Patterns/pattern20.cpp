#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        int stars=i;
        if(i>=n) stars=2*n-i;

        //stars
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }

        //spaces
        for(int j=0;j<(2*n)-(2*i);j++){
            cout<<" ";
        }

        //stars
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    pattern(n);
   
}
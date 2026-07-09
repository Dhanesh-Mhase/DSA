#include<bits/stdc++.h>
using namespace std;

void extractDigits(int n){
    while(n>0){
        int ld=n%10;
        cout<<ld<<endl;
        n/=10;

    }  
}


int countDig(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}



int main(){
    int n;
    cin>>n;
    // extractDigits(n);
    if(n==0) cout<<"1";
    else{
        int count=0;
        //count digits
        while(n>0){
            n=n/10;
            count+=1;   
        }
        cout<<count<<endl;
    }

    //TC=O(log10(n))

    // //another method
    // //do log of the number adn add 1 and gove the int value
    // cout<<countDig(n);
    
}
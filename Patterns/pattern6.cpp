#include<iostream>
using namespace std;

//here if we go by pattern 5 method the out will be different:
// 12345
// 2345
// 345
// 45
// 5

//so use the n-row+1
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
   
}
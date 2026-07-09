//recursion is when a function calls itself to solve a problem. It is a powerful technique that can simplify code and make it easier to understand. However, it can also lead to performance issues if not used carefully, as it can result in excessive memory usage and stack overflow errors.
//until a codition is met
#include<iostream>
using namespace std;

int count=0;
void f(){
    if(count==4) return; //because of the retun it will get out the function f();
    else cout<<count;
    count++;
    f();
}
int main(){
    f();
}
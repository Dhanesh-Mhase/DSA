#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
     
    //Brute

    //Left rotate by d place;
    
    int d;
    cin>>d;

    d=d%n;
    // vector <int> temp(d);

    // for(int i=0;i<d;i++){
    //     temp[i]=arr[i];
    // }

    // for(int i=d;i<n;i++){
    //     arr[i-d]=arr[i];
    // }
    
    // for(int i=n-d;i<n;i++){
    //     arr[i]=temp[i-(n-d)];
    // }

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }


    //Optimal
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

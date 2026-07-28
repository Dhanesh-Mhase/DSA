#include<bits/stdc++.h>
using namespace std;

int main(){

    int matrix [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3; 

    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j || j==(rows-1)-i){
                sum+=matrix[i][j];
            }
        }
    }
    cout<<sum;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int>> mat={{1, 2, 3, 4, 5, 6},
                   {20,21,22,23,24,7},
                   {19,32,33,34,25,8},
                   {18,31,36,35,26,9},
                   {17,30,29,28,27,10},
                   {16,15,14,13,12,11}};

    int n=mat.size();
    int m=mat[0].size();
    int left=0, right=m-1;
    int top=0, bottom=n-1;

    while(top<=bottom &&  left<=right){
       
        //left to right
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
        }
        top++;

        //top to bottom
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
        }
        right--;

        //right to left
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
        }
        
        //botttom to top
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<" ";
            }
            left++;
        }
    }         
}


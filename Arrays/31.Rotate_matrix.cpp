#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};

    int rows=4;
    int cols=4;


    // //Brute
    // int ans[rows][cols];

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         ans[j][rows-1-i]= mat[i][j];
    //     }
    // }


    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

  
    //Optimal
    //(1)Transpose
    //(2)Reverse each row

    //Transpose
    for(int i=0;i<=rows-2;i++){
        for(int j=i+1;j<=rows-1;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    //Reverse row
    for(int i=0;i<rows;i++){
        reverse(mat[i],mat[i]+rows);
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
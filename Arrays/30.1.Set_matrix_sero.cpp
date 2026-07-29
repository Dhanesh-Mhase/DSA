#include<bits/stdc++.h>
using namespace std;

// void setRow(int mat[][4],int row,int cols){
//     for(int j=0;j<cols;j++){
//         if(mat[row][j]!=0){
//             mat[row][j]=-1;
//         }
//     }
// }

// void setColumn(int mat[][4],int col,int rows){
//     for(int i=0;i<rows;i++){
//         if(mat[i][col]!=0){
//             mat[i][col]=-1;
//         }
//     }
// }



int main(){
    int mat[4][4]={{1,1,1,1},
                    {1,0,0,1},
                    {1,1,0,1},
                    {1,1,1,1}};

    int rows=4;
    int cols=4;


    //Brute

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(mat[i][j]==0){
    //             setRow(mat,i,cols);
    //             setColumn(mat,j,rows);
    //         }
    //     }
    // }

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         if(mat[i][j]==-1){
    //             mat[i][j]=0;
    //         }
    //     }
    // }

    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Better
     
    int row[rows]={0};
    int col[cols]={0};

    //Mark
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    //1 to 0
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(row[i] || col[j]){
                mat[i][j]=0;
            }
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
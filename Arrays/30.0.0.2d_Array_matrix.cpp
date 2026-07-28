#include<bits/stdc++.h>
using namespace std;

//Linear Search
bool linearSearch(int matrix[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
          if(matrix[i][j]==key){
            cout<<i<<" "<<j;
          }
        }
    }    
}


int main(){
    // int matrix [4][3];
    int matrix [4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3; 

    //Access element
    cout<<matrix[2][1]<<endl;

    //Update element
    matrix[2][1]=18;
    cout<<matrix[2][1]<<endl;

    //Traverse whole matrix

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    linearSearch(matrix,4,3,18);

}

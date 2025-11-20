#include<iostream>
using namespace std;

bool linearsearch(int mat[][3],int rows, int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3];
    int rows=4;
    int cols=3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }

    int key=6;
    if(linearsearch(matrix,rows,cols,key)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
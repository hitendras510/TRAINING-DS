#include<iostream>
using namespace std;
int main(){

    int matrix[3][4];
    int rows=3;
    int cols=4;
  for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }


    //output
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
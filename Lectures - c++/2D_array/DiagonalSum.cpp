
#include<iostream>
using namespace std;
 
int DiagonalSum(int mat[][4],int sz){ 
 int sum=0;

    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(i == j){
                sum += mat[i][j];
        } else if (j == sz-1-j){
        sum += mat[i][j];
    }
}
}
return sum;
}

int main(){
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int sz=4;
    cout<<DiagonalSum(mat,sz)<<endl;
    return 0;
}
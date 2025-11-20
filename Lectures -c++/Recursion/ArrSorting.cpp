#include<iostream>
#include<vector> //Vector automatically manages size
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1 /**If there is 0 element → sorted (nothing to check)
If there is 1 element → sorted (only one number)
*/){ 
       
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    cout<<isSorted(arr, arr.size())<<endl;
    return 0;
}
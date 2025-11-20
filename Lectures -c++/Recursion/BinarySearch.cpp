#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int tar, int st, int end ){
    if(st <= end){
        int mid = st + (end-st)/2; // st + end becomes too large → it can overflow 32-bit integer.

        if(arr[mid] == tar) return mid;
        else if(arr[mid] < tar) return binarySearch(arr, tar, mid+1, end);
        else return binarySearch(arr, tar, st, mid-1);
    }
    return -1;
}


int search(vector<int>& arr, int tar ){
    return binarySearch(arr, tar, 0, arr.size()-1);
}

int main(){
    int a[] = {1,2,3,4,5};
    int sz = 5;
    int target = 4;

    // Convert array → vector
    vector<int> arr(a, a + sz);

    cout << search(arr, target) << endl;
    return 0;
}
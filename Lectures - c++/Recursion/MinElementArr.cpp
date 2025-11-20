#include<iostream>
using namespace std;

int findMin(int arr[],int n){
    if(n==0)return arr[0]; //If only 1 element is left → that must be the minimum element
    return min(arr[n-1] /* This is the last element */ ,findMin(arr,n-1)/*  This finds minimum of the rest of the array.*/);
}

int main(){
    int arr[] = {8,3,5,1,9};
    cout << findMin(arr, 5);
}
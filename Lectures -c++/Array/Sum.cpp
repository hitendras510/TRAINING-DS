#include<iostream>
using namespace std;

void sumProduct(int arr[], int sz, int &sum, int &product){
    sum=0;
    product=1; // if product = 0 × arr[0] × anything = always 0 ❌
    for(int i=0;i<sz;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    cout<<"product is :"<<product<<endl;
    
}
int main(){
int arr[]={1,2,3,4,5};
int sz=5;
int sum=0;
int product=1;
sumProduct(arr,sz,sum,product);
return 0;
}
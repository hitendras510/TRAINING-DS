#include<iostream>
using namespace std;


// 1 to n.
// void print1toN(int n ){
//     if(n==0){
//         return ; 
//     }

//     print1toN(n-1);
//     cout<<n<<" ";
// }



// n to 1
void print1toN(int n ){
    if(n==0){
        return ; 
    }
    cout<<n<<" ";
    print1toN(n-1);
}

int main(){
    int n;
    cout<<"Enter your choice of number:"<<endl;
    cin>>n;
    print1toN(n);
}
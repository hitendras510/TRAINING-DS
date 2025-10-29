#include<stdio.h>

int main(){
    // int arr[5]={4,5,3,4,5};
    // int xor=0;
    // for(int i=0;i<6;i++){
    //     xor=xor^arr[i];
    // }
    // printf("%d",xor);

    int a = 5;
    int b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    

    printf("a=%d , b=%d", a,b);
}
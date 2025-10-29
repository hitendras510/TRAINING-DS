#include<stdio.h>

int main(){
    // int arr[5]={4,5,3,4,5};
    // int xor=0;
    // for(int i=0;i<6;i++){
    //     xor=xor^arr[i];
    // }
    // printf("%d",xor);

    // int a = 5;
    // int b = 3;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    

    // printf("a=%d , b=%d", a,b);

    int arr[4]={1,2,4,5};
    int xor = arr[1]^arr[2] ;
    xor = xor >> 1;
    printf("%d",xor);

}
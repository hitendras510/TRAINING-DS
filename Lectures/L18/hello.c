////swaping using pointer

//////////////////////////swaping using pointer 1.1

#include<stdio.h>
// int swap(int *x, int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// printf("%d %d",*x,*y);
// }
// int main(){
// int x=10;
// int y=20;
// swap(&x,&y);
// }


////////////////////////////swaping without 3rd variable
// #include <stdio.h>

// int swap(int *x, int *y)
// {  
//     *x = *y + *x;
//     *y = *x - *y;
//     *x = *x - *y;
//     printf("%d %d", *x, *y);
// }
// int main()
// {
//     int x = 10;
//     int y = 20;
//     swap(&x, &y);
// }


////////////////////////////////////using array
// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     int *p = arr;
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d", *(p + i));
//     }
// }
//////////////reverse
// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     int *p = arr;
//     for (int i = 3; i >=0; i--)
//     {
//         printf("%d", *(p + i));
//     }
// }


/////max element
// int main(){
//     int arr[3] [3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum = 0;
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             {
//                 sum= sum+arr[i][j];
//             }
//             printf("%d", sum);

//         }
    
// palindrome
// int main(){
//     int num,i,reversed=0,remainder;
//     printf("%d",num);
//     scanf("%d", &num);

//     i = num;

//     while(num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /=10 ;
//     }
//     if (original == reversed){
//         printf("Palindrome\n");
//     }
// }



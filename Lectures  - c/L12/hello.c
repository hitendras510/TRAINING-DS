#include<stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 4};
//     int sum=0;
//     for (int i=0;i<3;i++)
//     {
//         sum= sum+arr[i];
//     }
//     printf("%d", sum);
// }


///to print max value from array;
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 4};
//     int max=arr[0];
//     for (int i=0;i<3;i++)
//     {
//        if(arr[i]>max){
//         max=arr[i];
//        };
//     }
//     printf("%d", max);
// }


///TO PRINT MIN VALUE FROM ARRAY;
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 4};
    int max = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        };
    }
    printf("%d", max);
}

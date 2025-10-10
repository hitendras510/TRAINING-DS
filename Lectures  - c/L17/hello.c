// #include <stdio.h>

// void BubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         // Printing array after each pass
//         printf("Pass %d: ", i + 1);
//         for (int k = 0; k < n; k++)
//         {
//             printf("%d ", arr[k]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arr[5] = {5, 3, 4, 1, 2}; // Example unsorted array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     BubbleSort(arr, n);

//     printf("\nSorted array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
/////////////////////////////////////////////////////////////////////////////////

// //////////////////////////////////////////////////
#include<stdio.h>
int main(){
    int x=5;
    int *a=&x;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",a);
    printf("%d\n",*a);
}
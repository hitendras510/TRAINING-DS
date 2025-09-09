// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=0;i<3;i++)
//     {
//        for(j=0;j<3;j++)
//        {
//            printf("123");
//        }
//        printf("\n");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int num=65;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 3; j>i; j--)
//         {
//             printf(" ");
//         }
//         {
//             for (int k = 0; k<=i;k++)
//             {
//                 printf("*");
//             }
//         }
//         {
//             for (int p = 1; p <= i; p++)
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int num = 65;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
    }
    {
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
    }
    {
        for (int p = 3; p > i; p--)
        {
            printf("*");
        }
    }
    printf("\n");
}
}

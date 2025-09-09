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

#include <stdio.h>
int main()
{
    int num=65;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%c",num++);
        }
        printf("\n");
    }
}


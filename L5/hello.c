//01_09_2025

#include <stdio.h>
int main()
{
    // for (int i = 10; i > 0; i--)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // int sum=0;
    // for(int i =1; i <= 5; i++)
    // {
    //     {
    //         sum=sum + i;
    //         printf("Sum after adding %d is %d\n", i, sum);
    //     }
    // }
    

 int num = 123456789;
 int sum = 0;
 while (num > 0)
 {
    int lastDigit=num%10;
    sum=sum+lastDigit;
    num=num/10;

 }
 printf("%d", sum);

    return 0;
}

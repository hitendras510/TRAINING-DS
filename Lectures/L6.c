#include <stdio.h>

int main()
{
    // int num = 146;
    // int res = 0;

    // while (num != 0)
    // {
    //     int lastDigit = num % 10;
    //     res = res * 10 + lastDigit;
    //     num = num / 10;
    // }

    // printf("The reversed  number is: %d\n", res);
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    // int n = 5;
    // int i,
    //     if (num <= 1)
    // {
    //     printf("Not a prime\n");
    // }
    // else
    // {
    //     for (i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             printf("Not a prime\n");
    //             break;
    //         }
    //     }
    // }

int i,n,fact=1;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
printf("Factorial of %d is %d\n",n,fact);


    return 0;
}
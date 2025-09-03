#include <stdio.h>

int main()
{
    int num = 146;
    int res = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        res = res * 10 + lastDigit;
        num = num / 10;
    }

    printf("The reversed  number is: %d\n", res);

    return 0;
}
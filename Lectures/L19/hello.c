//////SUM OF ARRAY
#include <limits.h>

int main()
{
    int arr[5] = {1, 2, -4, 3, 5};
    int maxSum = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        int currSum = 0;
        for (int j = 1; j < 6; j++)
        {
            currSum = currSum + arr[j];
            if (currSum > maxSum)
                maxSum = currSum;
        }
    }
    printf("%d", maxSum);
}
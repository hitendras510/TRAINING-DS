//  //[10.20.30.40.50]=>[20,30,40,50,10]
// #include<stdio.h>
// int main(){
//     int arr[5]={10,20,30,40,50};
//     int first=arr[0];
//     for(int i =0;i<5;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[4]=first;

//     for(int k=0;k<5;k++){
//         printf(" %d ",arr[k]);
//     }
// }

// /////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 2, 2};
//     int isTrue = 1;
//     for (int i = 0; i < 5 / 2; i++)
//     {
//         if (arr[i] != arr[5 - i - 1])
//         {
//             isTrue = 0;
//         }
//         if (isTrue == 1)
//         {
//             printf("haiii");
//         }
//         else
//         {
//             printf("not");
//         }
//     }
// }
///////////sum of array

#include<stdio.h>
#include<limits.h>

int main(){
    int arr[6]={0,5,-5,3,-4,-5};
int maxSum=INT_MIN;

for(int i=0;i<6;i++){
    int currSum=0;
    for(int j=1;j<6;j++){
        currSum=currSum+arr[j];
        if(currSum>maxSum)  maxSum=currSum;
    
    }
}
printf("%d",maxSum);
}
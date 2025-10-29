//reloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    printf("\nEnter new size:");
    int newSize;
    scanf("%d",&newSize);

    int *arr = (int *)realloc(arr,newSize*sizeof(int));
    printf("Enter  elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
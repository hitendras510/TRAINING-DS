//DMA = dynamic memory allocation;
#include <stdio.h>
#include <stdlib.h>
int main(){
    // int n;
    // printf("Enter size:");
    // scanf("%d",&n);
    
    // int *arr = (int *)malloc(n*sizeof(int));

    // printf("Enter  elements:\n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    int n;
    printf("Enter size:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));

    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
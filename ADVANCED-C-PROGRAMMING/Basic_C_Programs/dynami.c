#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    int * arr;

    printf("\nEnter The Number of Elements : ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("\nPrinting the befour data: ");
    for(int i=0;i<n;i++){
        printf(" \n%d",arr[i]);
    }

    for(int i=0;i<n;i++){
        printf(" \n Enter The data for location %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nPrinting the After data: ");
    for(int i=0;i<n;i++){
        printf(" \n%d \t %u",arr[i],&arr[i]);
    }

}
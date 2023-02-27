#include<stdio.h>

void main(){
    int n,num;
    int arr[20];
    int i=0;

    printf("\nEnter the data: ");
    scanf("%d",&num);
    n=num;

    while(n>0){
        arr[i]=n%8;
        n/=8;
        i++;
    }

    printf("\n The ocatl of %d is :",num);
    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }

}
#include<stdio.h>

void main()
{
    int n,num;
    int arr[10];
    int i=0;

    printf("\nEnter the number: ");
    scanf("%d",&num);
    n=num;
    while(n>0){
        arr[i]=n%2;
        n/=2;
        i++;
    }

    printf("\nThe Bianay of %d is :",num);
    //at this end the i will have the size of array used
    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }


}
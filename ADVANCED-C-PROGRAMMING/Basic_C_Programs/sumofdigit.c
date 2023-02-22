#include<stdio.h>

void main(){
    int n,sum=0;

    printf("\nEnter The number:");
    scanf("%d",&n);

    while(n>0){
        sum+=(n%10);
        n/=10;
    }

    printf("\nThe Sum of Given Number: %d",sum);
}
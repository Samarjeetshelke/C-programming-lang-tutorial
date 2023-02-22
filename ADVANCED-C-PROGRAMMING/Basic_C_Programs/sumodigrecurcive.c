#include<stdio.h>
//sum of digit using recurcive function
int sumodigt(int n){
    if(n<=0){
        return 0;
    }
    return n%10+sumodigt(n/10);
}

void main(){
    int n,sum=0;

    printf("\nEnter The number:");
    scanf("%d",&n);

    printf("\nThe Sum of Given Number: %d",sumodigt(n));
}
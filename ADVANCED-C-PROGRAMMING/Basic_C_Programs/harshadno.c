#include<stdio.h>
//harshad number
//156 = 1+5+6=12  & 156%12=0

void main(){
    int sum=0,num=156,n;
    n=num;

    while(n>0){
        sum+=(n%10);
        n/=10;
    }

    if(num%sum==0){
        printf("\n%d is a Harshad Number.",num);
    }
    else
    {
        printf("\n%d is not a Harshad Number.",num);
    }
}
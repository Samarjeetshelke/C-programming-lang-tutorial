#include<stdio.h>
//Armstrong with out recursion
void main(){
    int num=153;
    int sum=0;
    int dig,n;
    n=num;
    while(n>0){
        dig=n%10;
        sum+=(dig*dig*dig);
        n/=10;
    }
    if(sum==num){
        printf("\n%d is a Armstrong Number",num);
    }
    else{
        printf("\n%d is not a Armstrong Number",num);
    }
}
#include<stdio.h>
//if the original and reverse number is same then its a palindrome
void main(){
    int n,rev=0,tmp;

    printf("\nEnter the number:");
    scanf("%d",&n);
    tmp=n;

    while(tmp>0){
        rev=(rev*10)+(tmp%10);
        tmp/=10;
    }

    if(n==rev){
        printf("\n%d is palinedrome",n);
    }
    else{
        printf("\n%d is not palinedrome",n);
    }

}
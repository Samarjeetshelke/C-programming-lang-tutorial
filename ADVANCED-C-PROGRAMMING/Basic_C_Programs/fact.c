#include<stdio.h>
//factorial

int fact(int n){
    if(n<=0){
        return 1;
    }                   //with recursion

    return fact(n-1)*n;
}

void main(){
    int n=5;

    // while(n>0){
    //     fact*=n;//without recursion
    //     n--;
    // }
    printf("The factorial is : %d",fact(5));
}
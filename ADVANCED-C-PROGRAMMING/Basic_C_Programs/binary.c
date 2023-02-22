#include<stdio.h>
//simpel decimal to binary

void tobinary(int n)//using recursion
{
    if(n<=0){
        return;
    }
    printf("%d",(n%2));
    tobinary(n/2);
}

void main(){
    int n=5;

    tobinary(n);
    // while(n>0){
    //     printf("%d",n%2);
    //     n/=2;
    // }
}

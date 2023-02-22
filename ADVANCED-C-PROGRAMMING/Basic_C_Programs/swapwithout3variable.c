#include<stdio.h>
//swap two number without third variable

void main(){
    int a=10,b=20;

    //method 1
    // a=a+b;
    // b=a-b;
    // a=a-b;

    //method 2
    a=a*b;
    b=a/b;
    a=a/b;

    printf("\nA: %d\nB: %d",a,b);
}
#include<stdio.h>
#include<conio.h>

union abc{
    int a;
    char b;
};

void main(){
    union abc x;
    x.a = 4;
    x.b ='a';
    printf(" size of union: %d",sizeof(x));
    printf("\nA: %d",x.a);//if it structure it will show 4,but union only store one value at a time that why it will show the latest value
    printf("\nB: %c",x.b);

}
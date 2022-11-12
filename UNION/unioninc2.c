#include<stdio.h>
#include<conio.h>

union abc{
    int a;
    char b;
};
union ghi{
    int a;
    char b;
}ax;
struct def
{
    int a;
    char b;
};

void main(){
    union abc x;
    struct def y;

    printf("\n%d",ax.a);//in union bydefault value is 0. in structure by default value of attribute is garbage value
    // y.a = 5;
    y.b = 'b';
    
    x.a = 4;
    x.b ='a';
    printf("\nsize of union: %d",sizeof(x));
    printf("\nA: %d",x.a);//if it structure it will show 4,but union only store one value at a time that why it will show the latest value
    printf("\nB: %c",x.b);

    printf("\nsize of struct: %d",sizeof(y));
    printf("\nA: %d",y.a);
    printf("\nB: %c",y.b);

}
/*
output:-
  0
size of union: 4
A: 97
B: a
size of struct: 8
A: 591
B: b

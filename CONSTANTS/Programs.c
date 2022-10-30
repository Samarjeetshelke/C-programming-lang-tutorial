//1.Constant Program using a const

#include<stdio.h>
#include<conio.h>

void main(){

    const float PI = 3.14;
    
    //PI = 2.14;//Error error: assignment of read-only variable 'PI'  7 |     PI = 2.14;//Error
   
    printf("%f",PI);
}
  output:
    3.1400

//2.Constant Program using a #defin preprocessor
#include<stdio.h>
#include<conio.h>

#define PI 3.14 //preprocessor

void main(){
   
    printf("%f",PI);
}
  output:
    3.1400

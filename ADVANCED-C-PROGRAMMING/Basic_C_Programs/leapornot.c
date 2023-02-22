#include<stdio.h>

//leap or not

void main(){
    int year=1996;

    if(year%4==0){
        printf("%d is Leap year",year);
    }
    else{
        printf("%d is not Leap year",year);
    }

}
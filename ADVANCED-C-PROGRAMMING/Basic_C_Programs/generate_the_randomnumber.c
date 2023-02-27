#include<stdio.h>

void main(){
    int numbers=10;
    while(numbers>0){
        printf("\n%d",(rand()%100)+1);
        numbers--;
    }
   
}

#include<stdio.h>
//number of digit

void main(){
    int n=12344;
    int count=0;

    while(n>0){
        count++;
        n/=10;
    }
    printf("\nThe Number of digit are: %d",count);
}
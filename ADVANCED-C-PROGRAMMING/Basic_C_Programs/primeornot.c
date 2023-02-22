#include<stdio.h>
#include<conio.h>

void main(){
    int n,i=2;

    printf("\nEnter the number to check weather prime or not:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            break;
        }
        i++;
    }

    if(n==i){
        printf("\nThe number is prime.");
    }
    else{
         printf("\nThe number is not prime.");
    }
}
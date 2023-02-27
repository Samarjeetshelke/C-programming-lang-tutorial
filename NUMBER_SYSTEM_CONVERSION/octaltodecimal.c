#include<stdio.h>
#include<math.h>

void main(){
    int n,num;
    int i=0,dcml=0;

    printf("\nEnter the number: ");
    scanf("%d",&num);
    n=num;

    while(n>0){
        dcml+=((n%10)*pow(8,i));
        n/=10;
        i++;
    }

    printf("\n%d is decimal for given octal.",dcml);
}
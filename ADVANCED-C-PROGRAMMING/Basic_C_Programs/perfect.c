#include<stdio.h>
//perfect number of not

void main(){
    int n=6;//6,28,496
    int sum=0,i=1;

    while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }

    if(sum==n){
        printf("\n%d is a perfect number.",n);
    }
    else{
        printf("\n%d is not a perfect number.",n);
    }
}
#include<stdio.h>
#include<conio.h>

void main(){
    int n,i=1;

    printf("\nEnter the range: ");
    scanf("%d",&n);

    while(n>0){
        int j=2;

        while(j<i){
            if(i%j==0){
                break;
            }
            j++;
        }
        if(j==i){
            printf("\n%d",i);
            n--;//first n fom 0
        }


       // n--;between 1 to n
       i++; 
    }
}
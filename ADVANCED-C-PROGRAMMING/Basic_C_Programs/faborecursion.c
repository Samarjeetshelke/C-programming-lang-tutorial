#include<stdio.h>
#include<conio.h>
int n1=0,n2=1,n3;

void fabo(int n){
    
    if(n>0){
        n3=n1+n2;
         printf("\n%d",n3);
         n1=n2;
         n2=n3;
        fabo(n-1);
    }
}

void main(){
    int i=2,n1=0,n2=1,n3;
    int no;

    printf("\nHow many noumber you want to print:");
    scanf("%d",&no);

    printf("\n%d\n%d",n1,n2);

    fabo(no-2);
}
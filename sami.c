#include<stdio.h>

void main(){
    int n1=789,n2 ;
    top:
    printf("\nplease enter password");
    scanf("%d", &n2);
    if(n1=n2){
        printf("WELCOME");
    }
    else{
        printf("please try again\n");
        goto top;
    }
    getchar();
    return;
}



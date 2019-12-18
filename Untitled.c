#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char n1[5] ={'s', 'a', 'm', 'i', '\0'};
    char n2[5], ch;
    int i = 0;
    top:
        printf("\nwelcome \nplease enter password\n");
        scanf("%s", n2);
        if(strcmp(n1, n2) == 0){
            printf("thank you");
        }
        else{
            printf("please try again");
            goto top;
        }
    getchar();

    return;
}
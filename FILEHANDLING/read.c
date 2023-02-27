#include<stdio.h>
#include<conio.h>

void main(){

    FILE *fptr;
    char ch;

    fptr=fopen("text.txt","r+");

    if(fptr==NULL){
        printf("\nFile is unable to open!");
    }
    else{
        while(ch!=EOF){
            printf("%c",ch);
            ch=fgetc(fptr);
        }
    }

    fclose(fptr);
}

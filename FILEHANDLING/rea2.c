#include<stdio.h>

void main(){
    FILE * file;
    char ch;
    char str[100];

    file=fopen("text.txt","r");
    if(file==NULL){
        printf("\nThe File Is Unable To Open!");
    }
    else{
        //ch=fgetc(file);
        while(str!="EOF"){
            fscanf(file,"%s",str);
            printf("%s",str);
        }
        
    }
}
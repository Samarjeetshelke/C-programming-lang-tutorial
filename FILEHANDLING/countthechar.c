#include<stdio.h>

void main(){
    FILE *file;
    int count=0,acout=1,line=1;

    file=fopen("final.txt","r");
    char ch=fgetc(file);

    while(ch!=EOF){
        count++;
        if(ch==' '||ch=='\n'){
            acout++;
        }
        if(ch=='\n'){
            line++;
        }
        ch=fgetc(file);
    }

    fclose(file);
    printf("\nThe Number of Char: %d And Words: %d And The lines :%d",count,acout,line);
}
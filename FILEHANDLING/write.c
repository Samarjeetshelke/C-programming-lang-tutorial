#include<stdio.h>

void main(){

    FILE * file;
    char str[100];
    int i=0;
    char ch;

    file=fopen("text.txt","w");
    if(file==NULL)
    {
        printf("\nUnable To Open the file");
    }
    else{

        // printf("\nEntre The data In Fiel: ");
        // scanf(" %s",&str);

        fprintf(file," NAME: samarjeet suresh shelke");
        // while(ch!='\0'){
        //     fputc(ch,file);
        //     i++;
        //     ch=str[i];
        // }

        fclose(file);
    }
}
#include<stdio.h>

void main(){

    FILE * file1,*file2,*file3;
    
    char ch;

    file1=fopen("text.txt","r");
    file2=fopen("text1.txt","r");
    file3=fopen("final.txt","a");

    if(file1==NULL||file2==NULL||file3==NULL){
        printf("\nUnable to open the file");
    }
    else{

        
        while((ch=fgetc(file1))!=EOF){
            fputc(ch,file3);
        }

        printf("\nData From file 1 copied...");

        
        while((ch=fgetc(file2))!=EOF){
            fputc(ch,file3);
            ch=fgetc(file2);
        }

        printf("\nData From file 2 copied...");

        printf("\nData From file 3:\n");
        ch=fgetc(file3);
        while(ch!=EOF){
            printf("%c",ch);
            ch=fgetc(file3);
        }

    }



}
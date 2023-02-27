#include<stdio.h>

void main(){
    FILE *file1,*file2,*file3;
    char ch;

    file1=fopen("text.txt","r");
    file3=fopen("final.txt","w");

    printf("\nThe data from first file: ");
    ch=fgetc(file1);
    while(ch!=EOF){
        fputc(ch,file3);
        printf("%c",ch);
        ch=fgetc(file1);
    } 

    fclose(file1);
    //fclose(file3);

    file2=fopen("text1.txt","r");
    //file3=fopen("final.txt","a");

    ch=fgetc(file2);//after printing th e data from first file the ch set to the EOf ,so if you  not reinitilize the it will print nothing
    printf("\nThe data from second file file: ");
    while(ch!=EOF){
        fputc(ch,file3);
         printf("%c",ch);
        ch=fgetc(file2); 
    } 
    
    fclose(file2);
    fclose(file3);

    file3=fopen("final.txt","r");
    ch=fgetc(file3);
    printf("\nThe data form final file:");
    while (ch!=EOF){
        printf("%c",ch);
        ch=fgetc(file3);
    }

}
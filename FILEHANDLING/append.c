#include<stdio.h>

void main(){
    FILE * ptr;

    ptr=fopen("text.txt","a");

    if(ptr==NULL){
        printf("\nUnable to open the file");

    }
    else{
        int n;
        printf("\nEnter the roll numer: ");
        scanf("%d",&n);
        fprintf(ptr,"\nRoll Number: %d",n);
        printf("Data inserted succussfullly");

    }
}
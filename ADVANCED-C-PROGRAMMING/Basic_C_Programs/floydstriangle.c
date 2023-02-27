#include<stdio.h>

void main(){
    int range;
    int i=0,j=0;
    int count=1;
    
    printf("\nEnter the range:");
    scanf("%d",&range);
    printf("\n");
    while(i<range){
        printf("\n");
        for(j=0;j<=i;j++){
            printf(" %d",count++);
        }
        i++;
    }
   
}

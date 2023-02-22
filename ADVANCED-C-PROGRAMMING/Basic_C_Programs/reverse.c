#include<stdio.h>

void main(){
    int n,rev;
    
    printf("\n Enter The Number:");
    scanf("%d",&n);

    while(n > 0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    printf("\nThe reverse number is %d",rev);
}
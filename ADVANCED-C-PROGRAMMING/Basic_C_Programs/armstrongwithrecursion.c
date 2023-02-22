#include<stdio.h>
//Armstrong with recursion

int arm(int n){
    int dig;
    if(n<=0){
        return 0;
    }
    dig=n%10;
    return arm(n/10)+(dig*dig*dig);
}

void main(){
    int num=153;
   
    if(num==arm(num)){
        printf("\n%d is a Armstrong Number",num);
    }
    else{
        printf("\n%d is not a Armstrong Number",num);
    }
}
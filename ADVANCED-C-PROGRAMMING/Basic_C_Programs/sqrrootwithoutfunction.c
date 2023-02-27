#include<stdio.h>

void main(){
    int n=16;
    int l=0,h=16,mid;
    
    mid=(l+h)/2;
    while(mid*mid!=n){
        mid =(l+h)/2;
        if(mid*mid>n){
            h=mid;
        }
        else{
            l=mid;
        }
    }
    
    printf("%d is the squar root of given number..",mid);
    
}

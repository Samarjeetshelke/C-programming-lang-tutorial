#include<stdio.h>

void main(){
    int n=16;
    int l=0,h=8,mid;
    
    mid=(l+h)/2;
    while(mid*mid*mid!=n){
        mid =(l+h)/2;
        if(mid*mid*mid>n){
            h=mid;
        }
        else{
            l=mid;
        }
    }
    
    printf("%d is the cube root of given number..",mid);
    
}

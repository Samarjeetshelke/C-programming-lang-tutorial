#include<stdio.h>
//the perfect square between range
void main(){
    int n1=9,n2=108;
    
    while(n1!=n2){
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    printf("\n%d greatest is common divisior",n1);
   
}

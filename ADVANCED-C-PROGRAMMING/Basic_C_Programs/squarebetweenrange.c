#include<stdio.h>
//the perfect square between range
void main(){
    int i=0;
    int range=50,sqr=0;
    
    while(sqr<50){
        printf("\n%d is square of %d",sqr,i++);
        sqr=i*i;
    }
}

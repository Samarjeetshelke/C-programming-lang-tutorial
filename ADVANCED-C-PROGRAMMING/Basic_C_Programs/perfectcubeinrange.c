#include<stdio.h>
//the perfect cube between range
void main(){
    int i=0;
    int range=50,cube=0;
    
    while(cube<50){
        printf("\n%d is cube of %d",cube,i++);
        cube=i*i*i;
    }
}

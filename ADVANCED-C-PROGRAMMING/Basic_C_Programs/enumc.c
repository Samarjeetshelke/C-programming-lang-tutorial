#include<stdio.h>

void main(){
    enum day{sun,mun,tue,wen,thr,fri,sat};
    int i;
    for(i=sun;i<=sat;i++){
        printf("%d",i);
    }
    
}
#include<stdio.h>
void main(){
    int p,n,coutn;
    float r,si;
    int count =1;
    while(count<=3){


    printf("please enter value of principle value ,years,rate");
    scanf("%d%d%f",&p,&n,&r);
    si=n*p*r/100;
    printf("simple intrest=RS%f\n", si);
    count=count+1;
    }
    return;
}




    








#include<stdio.h>
void main(){
       int p,n,count;
       float r,si;
       for(count=1;count<=3;count=count+1){
	printf("please enter principle valu,year,rate");
	scanf("%d%d%f",&p,&n,&r);
	si=p*n*r/100;
	printf("simple intrest=RS%f",si);
       }

       return;

}

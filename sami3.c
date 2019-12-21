#include<stdio.h>
void main(){
	int yos,qua;
	char g;
	printf("please enter your gender,years of surves,qualification\n\nif qua.is graduat enter (0),if qua. is postgraduat enter (1)");
	scanf("%c%d%d",&g,&yos,&qua);
	if(g=='m' && yos>=10 && qua==1){
		printf("your  salary is =RS15000");
	}
	else if(g=='m' && yos>=10 && qua==0){
		printf("your salary is =RS10000");
	}
	else if(g =='m' && yos<10 && qua==1){
		printf("your salary is =RS10000");
	}
       else if(g =='m' && yos>10 && qua==0){
       printf("your salary is=RS7000");
	}
       else if(g=='f' && yos>=10 && qua==1){
	       printf("your salary is =RS12000");
       }
       else if(g=='f' && yos>=10 && qua==0){
	       printf("your salary is =RS10000");
       }
       else if(g=='f' && yos<10 && qua==1){
	       printf("your salary is=RS10000");
       }
       else if(g=='f' && yos<10 && qua==0){
	       printf("your salary is=RS7000");
       }
	getch();
	return;

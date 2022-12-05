
#include<stdio.h>


union student{
	int id;
	char name;
	float percentge;
};

void main(){
	union student x;
	printf("The size Of union : %ld",sizeof(x)); 
	
}

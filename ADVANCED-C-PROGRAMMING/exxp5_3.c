#include<stdio.h>

struct student{
	char name[10];
	int id;
	struct address{
		char taluka[10];
		char district[10];
	}adr;
}s;

void main(){
	
	printf("\nEnter name: ");
	scanf("%s",s.name);
	printf("\nEnter id: ");
	scanf("%d",&s.id);
	printf("\n---Enter Address---");
	printf("\nEnter Taluka: ");
	scanf("%s",s.adr.taluka);
	printf("\nEnter District: ");
	scanf("%s",s.adr.district);
	
	printf("\n----Printing Data----");
	printf("\nName:%s",s.name);
	printf("\nId: %d",s.id);
	printf("\n---Address---");
	printf("\nEnter Taluka: %s",s.adr.taluka);
	printf("\nEnter District: %s",s.adr.district);
	
}

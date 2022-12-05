#include<stdio.h>
#include<string.h>

struct emp{
	char name[10] ;
	int id;
	float salary;
}emp[5];

void main(){
	char s[10];
	int i =0;
	
	while(i<5){ 
		printf("\nEnter data for Employee:%d",i+1);
		printf("\nEnter Name: ");
		scanf(" %s",emp[i].name);
		printf("\nEnter Id: ");
		scanf("%d",&emp[i].id);
		printf("\nEnter Salary: ");
		scanf("%f",&emp[i].salary);
		i++;
	}
	i=0;
	while(i<5){ 
		printf("\n\n-----Printing a data for Employee:%d -----",i+1);
		printf("\nName:%s ",emp[i].name);
		
		printf("\nId:%d",emp[i].id);

		printf("\nSalary: %f",emp[i].salary);

		i++;
	}
}

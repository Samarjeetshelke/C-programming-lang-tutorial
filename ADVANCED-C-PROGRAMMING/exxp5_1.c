#include<stdio.h>
#include<string.h>

struct emp{
	char name[10] ;
	int id;
	float salary;
};

void main(){
	struct emp e1,e2,e3,e4,e5;

	
		printf("\nEnter data for Employee:E1");
		printf("\nEnter Name: ");
		scanf(" %s",e1.name);
		printf("\nEnter Id: ");
		scanf("%d",&e1.id);
		printf("\nEnter Salary: ");
		scanf("%f",&e1.salary);
		
		printf("\nEnter data for Employee:E2");
		printf("\nEnter Name: ");
		scanf(" %s",e2.name);
		printf("\nEnter Id: ");
		scanf("%d",&e2.id);
		printf("\nEnter Salary: ");
		scanf("%f",&e2.salary);
		
		printf("\nEnter data for Employee:E3");
		printf("\nEnter Name: ");
		scanf(" %s",e3.name);
		printf("\nEnter Id: ");
		scanf("%d",&e3.id);
		printf("\nEnter Salary: ");
		scanf("%f",&e3.salary);
		
		printf("\nEnter data for Employee:E4");
		printf("\nEnter Name: ");
		scanf(" %s",e4.name);
		printf("\nEnter Id: ");
		scanf("%d",&e4.id);
		printf("\nEnter Salary: ");
		scanf("%f",&e4.salary);
		
		printf("\nEnter data for Employee:E5");
		printf("\nEnter Name: ");
		scanf(" %s",e5.name);
		printf("\nEnter Id: ");
		scanf("%d",&e5.id);
		printf("\nEnter Salary: ");
		scanf("%f",&e5.salary);
		

		printf("\n\n-----Printing a data for Employee E1 -----");
		printf("\nName:%s ",e1.name);
		
		printf("\nId:%d",e1.id);

		printf("\nSalary: %f",e1.salary);
		
		printf("\n\n-----Printing a data for Employee E2 -----");
		printf("\nName:%s ",e2.name);
		
		printf("\nId:%d",e2.id);

		printf("\nSalary: %f",e2.salary);


		printf("\n\n-----Printing a data for Employee E3 -----");
		printf("\nName:%s ",e3.name);
		
		printf("\nId:%d",e3.id);

		printf("\nSalary: %f",e3.salary);


		printf("\n\n-----Printing a data for Employee E4 -----");
		printf("\nName:%s ",e4.name);
		
		printf("\nId:%d",e4.id);

		printf("\nSalary: %f",e4.salary);


		printf("\n\n-----Printing a data for Employee E5 -----");
		printf("\nName:%s ",e5.name);
		
		printf("\nId:%d",e5.id);

		printf("\nSalary: %f",e5.salary);


}

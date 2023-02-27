#include<Stdio.h>

struct fullname
{
    char fname[15];
    char mname[15];
    char lname[15];
};

struct student
{
    //char name[50];
    struct fullname name;
   
    int rollno;
    float percentage;
    char a;
};

union fullnameu
{
    char fname[15];
    char mname[15];
    char lname[15];
};

union employee
{
   union fullnameu name;
   int empid;
   float salary;
};

void show(struct student s1){
     //printf("\nthe name:  %s %s %s",s1.name.lname,s1.name.fname,s1.name.mname);//structure in structure
     printf("\nthe name:  %s %s %s",s1.name.lname,s1.name.fname,s1.name.mname);//union in structure
    printf("\nthe roll:  %d",s1.rollno);
    printf("\nthe percentage:  %f",s1.percentage);

    printf("\nthe of structure:%d",sizeof(s1));
}

void display(struct student * s1){

    printf("\nthe name:  %s %s %s",s1->name.lname,s1->name.fname,s1->name.mname);//impp you can just pass the aderss of main structure and you can acces that using the structure pointer but the structure withint structure may require member operaator
    printf("\nthe roll:  %d",s1->rollno);
    printf("\nthe percentage:  %f",s1->percentage);

    printf("\nthe of structure:%d",sizeof(s1));
}

void getdata(union employee *e){
    
    printf("\nEnter the Employee Number: ");
    scanf(" %d",&e->empid);
    printf("\nEnter the Salary: ");
    scanf(" %f",&e->salary);
    printf("\nEnter the name: ");
    scanf(" %s",&e->name.fname);
}

void showUnion(union employee s1){
     printf("\nthe name:  %s",s1.name);
    printf("\nthe Id:  %d",s1.empid);
    printf("\nthe Salary:  %f",s1.salary);

    printf("\nthe of union:%d",sizeof(s1));
}
void main(){
  struct student stu[5];

    for(int i=0;i<5;i++){
        printf("\nEnter the name: ");
        scanf(" %s %s %s",&stu[i].name.fname,&stu[i].name.mname,&stu[i].name.lname);
        printf("\nEnter the Roll Number: ");
        scanf(" %d",&stu[i].rollno);
        printf("\nEnter the Percentage: ");
        scanf(" %f",&stu[i].percentage);
    }
  
    
   // union employee e1;
    //getdata(&e1);
    //showUnion(e1);
    for(int i=0;i<5;i++){
        show(stu[i]);
    }
    
    //display(&s1);


}
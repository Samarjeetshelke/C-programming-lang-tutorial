Dynamic Memory Allocation
lib header file<stlib.h>
    1.malloc()
    2.calloc();
    3.free();
    4.realloc();
    
    
    for more information:- link:-   https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    
   1.Malloc();
   
         It is a function used to allogate the memory Dynamically with spacifed size .it initilizes each block with garabge value.
         Syntax:-
           ptr=(cast-type*)malloc(size*sizo of(int,float,char));
    
    
    
#include<stdio.h>
#include<conio.h>

void main()
{
 char * ptr;
 int i,n;
 clrscr();
 printf("\nPlease enter the size:-");
 scanf("%d",&n);
 ptr=(char*)malloc(n*sizeof(char));                          //Memory is allocated for char
 if(ptr==NULL)
 {
   printf("\nDynamic memory is not allocated.");

 }
 else
   printf("\nMemory is allocated .");

 for(i=0;i<n;i++)
 { 
   flushall();                                                 //to clear the buffer memory
   printf("\nenter val for ptr[%d]:- ",i);
   scanf("%c",&ptr[i]);

 }
 for(i=0;i<n;i++)
 {
   printf("%5c",ptr[i]);
 }


getch();
}



     2.Calloc();
          It is a function used for contiguous dynamic memory allocation ,It initilizes each block with value 0.
          
          Syntax:-
             ptr=(cast-type int/float /char*)calloc(size*sixe of(int/char/float);
          
 #include<stdio.h>
#include<conio.h>

void main()
{
 int * ptr;
 int i,n;
 clrscr();
 printf("\nPlease enter the size:-");
 scanf("%d",&n);
 ptr=(int*)calloc(n*sizeof(int));                          //Memory is allocated for char
 if(ptr==NULL)
 {
   printf("\nDynamic memory is not allocated.");

 }
 else
   printf("\nMemory is allocated .");

 for(i=0;i<n;i++)
 { 
   flushall();                                                 //to clear the buffer memory
   printf("\nenter val for ptr[%d]:- ",i);
   scanf("%d",&ptr[i]);

 }
 for(i=0;i<n;i++)
 {
   printf("%5d",ptr[i]);
 }


getch();
}

        
          
       
     
     

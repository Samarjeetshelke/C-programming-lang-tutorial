/*
    Write a programe to convert upper to lower & Loower to upper.
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i=0;
  char a[50];
  clrscr();
  printf("\nEnter the string:-");
  gets(a);
  puts(a);
  while(a[i]!='\0'){
     if(a[i]>=65&&a[i]<=90){
       a[i]=a[i]+32;
     }
     else{
      a[i]-=32;
     }

   i++;
  }
    printf("\nAfter sorting:-");
   puts(a);

   getch();
  }
/*
  write a programe to chack string is binary or not.
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
  printf("\n");
  for(;a[i]!='\0';){
      if(a[i]=='1'&&a[i]=='0'){
	 i++;
      }
  }
  if(a[i]!='\0'){
   printf("\nNot");
  }
  printf(" Binary");

  getch();
}
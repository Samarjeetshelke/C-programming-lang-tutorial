/* Write  A programe to find out
 the Length of string without using the function*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i;
  char a[50];
  clrscr();
  printf("\nEnter the string:-");;
  gets(a);
  puts(a);
  for(i=0;a[i]!='\0'; ){
   i++;
  }
  printf("\nLength of String:-%d",i);
  getch();

}


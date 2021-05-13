/*
    Write the programe to find out
    upper,lower case,digit and other char from etered string.
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i=0,lc=0,uc=0,oc=0,dc=0;
  char a[50];
  clrscr();
  printf("\nEnter the string:-");
  gets(a);
  puts(a);
  while(a[i]!='\0'){
      if(a[i]>=65&&a[i]<=90){
       uc++;
      }
      else{
	 if(a[i]>=97&&a[i]<=122){
	  lc++;
	 }
	 else{
	    if(a[i]>=48&&a[i]<=58){
	     dc++;
	    }
	    else{
	      oc++;;
	    }
	 }
      }
  i++;
  }

  printf("\nData:-\nUpper Case:- %d\nLower Case:- %d\nDigit:- %d\nOther Char:- %d\nTotal Char:- %d",uc,lc,dc,oc,i);
getch();
}
#include<stdio.h>
#include<conio.h>

void fizzBuzz(int n){
  if(n % 3 ==0 && n % 5==0){
    printf("\nfizzBuzz");
  }
  else if(n % 3 ==0){
    printf("\nfizz");
  }
  else if(n % 5==0){
    printf("\nBuzz");
  }
  else{
   printf("\n%d",n);
  }
  return;
}

void main(){
 int i=1;
 int no = 0;
 clrscr();
 printf("\nEnter the no:-");
 scanf("%d",&no);
 while(i<=no){
  fizzBuzz(i);
  i++;
 }
 getch();
}
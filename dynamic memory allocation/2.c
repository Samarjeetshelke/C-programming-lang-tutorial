// Online C compiler to run C program onlinte
/*Write the programe for combination of Two stings to produce new strings */
#include <stdio.h>

int main() {
  int n=0;
  char p[50],q[50],*s;
  int i,j;
  s=(char*)malloc(sizeof(char)*n);
  printf("\nPlease enter string frist:-");
  gets(p);
  printf("\nPlease  enter the strings two:-");
  gets(q);
  for(i=0;p[i]!='\0';i++){
      *(s+i)=p[i];
  }
  for(j=0;q[j]!='\0';j++,i++){
      *(s+i)=q[j];
  }
  *(s+i)=q[j];
  puts(p);
  puts(q);
  printf("\ncombination of two string:-\n");
  puts(s);
    
    return 0;
}

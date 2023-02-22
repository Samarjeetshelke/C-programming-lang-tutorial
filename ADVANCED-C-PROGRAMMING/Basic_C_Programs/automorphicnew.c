#include<stdio.h>
int main()
{
      int temp,square,count=1,number;

      printf("enter any number : ");
      scanf("%d",&number);
      temp=number;
      square=number*number;

    
     printf("square of a number %d ",square);

      
      while (number!=0)
     {
          count=count*10;
          number=number/10;
     }

     //check number is automorphic  of not 
      if(square%count==temp) {
           printf(" \n %d is Automorphic Number",temp);
      }
      else
      {
          printf("\n %d is Not Automorphic Number",temp);
      }
           
      return 0;
}
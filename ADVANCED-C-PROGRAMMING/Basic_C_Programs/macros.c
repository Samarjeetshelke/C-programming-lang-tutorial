#include<stdio.h>

#define Age 18//object like macros

#define voat(a)(a>=18?1:0)

#define oddeven(a)(a%2==0?1:0)//functions like macoros

void predefinedmacros(){//predefined micros
    printf("\nThe file is : %s",__FILE__);//location
    printf("\nThe Line is : %d",__LINE__);//current line number
    printf("\nThe Time is : %s",__TIME__);//current time
    printf("\nThe Date is : %s",__DATE__);//current date
    printf("\nThe stdc is : %d",__STDC__);
    printf("\nThe stdc is : %d",__STDC_VERSION__);
    printf("\nThe stdc is : %d",__STDC_HOSTED__);

}



void main(){
    int a;

    // printf("\nEnter the NUmber:");
    // scanf("%d",&a);

    //if(a>=Age){
   /* if(voat(a)){
        printf("\nEligible for voating....");
    }
    else{
         printf("\nNot Eligible for voating....!");
    }*/
    // if(oddeven(a)){
    //     printf("\nTeh number is positive");
    // }
    // else{
    //     printf("\nTeh number is Negative");
    // }
    predefinedmacros();
}
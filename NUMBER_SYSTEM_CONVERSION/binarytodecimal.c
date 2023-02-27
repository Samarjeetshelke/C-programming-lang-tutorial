#include<stdio.h>
#include<math.h>

void main(){
    int n,num;
    int decimal=0;
    int i=0;
    printf("\nEnter the binary numer: ");
    scanf("%d",&num);
    n=num;
    

    while(n>0){
        decimal=decimal+((n%10)*pow(2,i));//pow it has two argument base snd power
        i++;
        n/=10;
    }
    printf("\nThe deciaml number for %d is:  %d",num,decimal);

}
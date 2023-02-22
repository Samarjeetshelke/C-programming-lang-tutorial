#include<stdio.h>
//automorphic number
//my main logic is 5^2=25 ok then 25-5=20  the last digit is same a number that why is a zero
//25^2=625 = 625-25=600 last 00
void main(){
    int num=76,a;
    int sqr,dig=0,new=0;
    a=num;

    while(a>0){
        dig++;
        a/=10;//find out the number of dig
    }
    sqr=num*num;
    a=sqr-num;//25-5 like=20

    while(dig>0){
        new=(new*10)+(a%10);
        a/=10;
        dig--;
    }
    
    if(new==0){
        printf("\n%d is a automorphic number",num);
    }
    else{
        printf("\n%d is not a automorphic number",num);
    }

}
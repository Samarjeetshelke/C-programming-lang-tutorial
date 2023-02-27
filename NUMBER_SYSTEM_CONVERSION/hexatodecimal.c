#include<stdio.h>
#include<math.h>

int returnsize(char ar[]){
    int i;
    for(i=0;ar[i]!='\0';i++){}
    return i-1;
}



void main(){
    int n,i=0;
    char ar[100],ch;
    int decimal=0;
    int size=0;
    int val;

    printf("Enter the data: ");
    scanf("%s",&ar);
    size=returnsize(ar);

    while(size>=0){
        ch=ar[size];
        if(ch>=65){
            val=ch-55;//A-55==10
        }
        else{
            val=ch-48;//if its 2 then its ascii will be 50,so 50-48=2
        }

        decimal+=(val*pow(16,i));
        size--;
        i++;
    }

    /*scanf("%x",&n);*/
    printf("The decimal is: %d",decimal);
}
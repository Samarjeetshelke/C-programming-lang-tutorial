#include<stdio.h>

char givedigittochar(int n){

    if(n==10){
        return 'A';
    }

    if(n==11){
        return 'B';
    }

    if(n==12){
        return 'C';
    }

    if(n==13){
        return 'D';
    }

    if(n==14){
        return 'E';
    }

    if(n==15){
        return 'F';
    }

    return n;
}

void main(){
    int n,num;
    char arr[20];
    int i=0;
    int dig;

    printf("\nEnter the data: ");
    scanf("%d",&num);
    n=num;

    while(n>0){
       dig=n%16;
       if(dig<10){
            arr[i]=48+dig;
       }
       else{
            arr[i]=55+dig;
       }
       i++;
       n/=16;
    }

    printf("\n The ocatl of %d is :",num);
    for(i=i-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}
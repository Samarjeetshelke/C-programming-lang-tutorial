#include<stdio.h>

void main()
{
int h,l,d,e,n;
int mat1[2][2],mat2[2][2],add[2][2];

printf("Matrix 1\n");
for(h=0;h<2;h++)
{
    for(l=0;l<2;l++)
    {
    printf("Enter Value :- ");
    scanf("%d",mat1[h][l]);
    }
}

for(h=0;h<2;h++)
{
    for(l=0;l<2;l++)
    {
    printf("%d \t",mat1[h][l]);

    }
    printf("\n");
}




printf("Matrix 2\n");

for(d=0;d<2;d++)
{
    for(e=0;e<2;e++)
    {
        printf("Enter Value :- ");
        scanf("%d",mat2[d][e]);
        
    }
}

for(d=0;d<2;d++)
{
for(e=0;e<2;e++)
{
printf("%d \t",mat2[d][e]);

}
printf("\n");
}


//Addition
printf("\n Addition :");
for(h=0;h<2;h++)
{
for(l=0;l<2;l++)
{
add[h][l]= mat1[h][l] + mat2[h][l];

}

}

printf("\nThe Addition of two Matrix is:\n");
for(d=0;d<2;d++)
{
for(e=0;e<2;e++)
{
printf("%d \t",add[d][e]);

}
printf("\n");
}

}
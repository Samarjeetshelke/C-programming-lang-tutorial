// Online C compiler to run C program online
#include<stdio.h>
//#include<conio.h>
void main() {
    
    int tab[3][3]={
        1,2,3
        ,4,5,6
        ,7,8,9
    };
    int i,j,x,y,data,m,k;
   //clrscr();
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",tab[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    
    printf("\nPlease enter '0' for plyar 1& '1' for plyar 2");
    for(i=0;i!=100 ;i++){
        if(i%2==0){
            m=1;
        }
        else{
            m=2;
        }
        printf("\nEnter player %d:-",m);
        printf("\nenter the position:-");
        scanf("%d%d",&x,&y);
        printf("\nPlease enter data('0' or '1'):-");
        scanf("%d",&data);
        tab[x][y]=data;
        //clrscr();
        printf("\n");
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d",tab[j][k]);
                printf("\t");
            }
            printf("\n");
        }
        if(tab[0][0]==tab[0][1]==tab[0][2]||tab[1][0]==tab[1][1]==tab[1][2]||tab[2][0]==tab[2][1]==tab[2][2]||tab[0][0]==tab[1][0]==tab[2][0]||tab[0][1]==tab[1][1]==tab[2][1]||tab[0][2]==tab[1][2]==tab[2][2]){
            printf("\nplayer %d  is win!",m);
            
           break;
        }
    }
  //getch();
    
}


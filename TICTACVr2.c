header file----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 (here i created new header file.h)
#include<stdio.h>
#include<conio.h>

void ground(char tic[3][3]){
   printf("\n.............Welcome..............................................");
	    printf("\n\n\n\n\t\t");
	    printf("    |    |     \n ");
	    printf("\t\t");
	    printf("  %c |  %c |  %c   \n ",tic[0][0],tic[0][1],tic[0][2]);
	    printf("\t\t");
	    printf("--------------\n ");
	    printf("\t\t");
	    printf("    |    |     \n ");
	    printf("\t\t");
	    printf("  %c |  %c |  %c   \n ",tic[1][0],tic[1][1],tic[1][2]);
	    printf("\t\t");
	    printf("--------------\n ");
	    printf("\t\t");
	    printf("    |    |     \n ");
	    printf("\t\t");
	    printf("  %c |  %c |  %c   \n ",tic[2][0],tic[2][1],tic[2][2]);
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include"file.h"

void main(){
	 int n,m,y,x;
	 char data;
	 char tic[3][3]={
			  '\0','\0','\0',
			  '\0','\0','\0',
			  '\0','\0','\0'
			  } ;
	 int i=0;
	 clrscr();
	 while(i!=100){
	 clrscr();
    ground(tic);
	if(i%2==0){
	    m=1;
	}
	else{
	    m=2;
	}
	printf("\nplayer %d:-",m);
	printf("\nEnter the position:-");
	scanf("%d%d",&x,&y);
	if(m==1){
	data='x';
	}
	else{
	 data='o';
	}
	tic[x][y]=data;
	clrscr();
	ground(tic);
	if(i>3){
	  if(tic[0][0]==tic[0][1]==tic[0][2]||tic[1][0]==tic[1][1]==tic[1][2]||tic[2][0]==tic[2][1]==tic[2][2]||tic[0][0]==tic[1][0]==tic[2][0]||tic[0][1]==tic[1][1]==tic[2][1]||tic[0][2]==tic[1][2]==tic[2][2]){
	      printf("\nPlayer %d  is win!",m);
	      break;
	 }
	}
	 i++;
    }
getch();
}

/*wap to add two matrix*/
#include<stdio.h>
#define MAX 5
void main()
{
 int matrix1[MAX][MAX],matrix2[MAX][MAX],matrix3[MAX][MAX];
 int i,j;
 int a,b,a1,b1;
 printf("enter size of matrix");
 scanf("%d%d",&a,&b);
 printf("enter value of 1st matix");
 for(j=0;j<=(b-1);b++)
 {
   for(i=0;i<=(a-1);i++)
    {
    scanf("%d",&matrix1[i][j]);
    }
 }
 printf("enter the size of 2nd matrix");
  scanf("%d%d",&a1,&b1);
  if(b!=a1)
  {
   printf("size of 2nd matrix is not compatible");
   exit(1);
  }
  else
  {
     printf("enter value of 2st matix");
     for(j=0;j<=(b1-1);b++)
       {
	 for(i=0;i<=(a1-1);i++)
	    {
	      scanf("%d",&matrix1[i][j]);
	    }
       }
  }
    for(j=0;j<=(b-1);b++)
       {
	 for(i=0;i<=(a-1);i++)
	  {

	    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
	    printf("sumation of matrix is=%d ",matrix3[i][j]);
	  }
       }
 }
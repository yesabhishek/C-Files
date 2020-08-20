/* To find the sides and hypotenuse  of the triangle using pythogorean triple*/ 




#include<stdio.h>				/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/
{
int m,n;						/* m and n two sides of the triangle */

printf(" enter the two sides of the triangle ");
scanf(" %d%d",&m,&n);

int side_1=(m*m)-(n*n);
int side_2=2*m*n;

int hypotenuse=(m*m)+(n*n);				/* using pythogorean triple (formula)*/

printf(" the sides are %d , %d and hypotenuse is %d",side_1,side_2,hypotenuse);			/* printing the required outut*/ 

return(0);
}

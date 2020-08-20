/* calculate the btu */ 




#include<stdio.h>					/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/

{
float  g,eff,btu;			/* g for gallons , eff for efficiency and btu for storing the value */


printf(" enter the gallons of oil  ");
scanf("%f",&g;

printf(" enter the efficiency   ");
scanf("%f",&eff;


eff=eff/100;
btu=138095.23809523*g*eff;				/* btu is calculated using the given formula */ 

printf(" the btu is : %f ",btu);
return(0);
}

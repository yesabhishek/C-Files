/* Calculating the time to cut the grass of a given rectangular field */




#include<stdio.h>			/* printf,scanf definition*/				 	

int main(void) 					/*reserved word*/
{
int l,b;						/* l and b is the length and breadth of the given field*/
float area;						/* rate of cutting grass =$2 per sq feet*/
int rate=2;

printf(" enter the length and breadth of the rectangular field ");

scanf("%d%d",&l,& b);

area=l*b;					/* area= length*breadth*/

int time=area/rate; 		/* time=time to cut the grass of the whole field*/

printf(" \n  time to cut the grass is %d" ,time);
return(0);
}

/* to calculate the vtbi and rate */




#include<stdio.h>					/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/
{
int vol,min;		/* volume vol in ml and minutes min in minutes */
printf(" volume to be infused(ml) => ");
scanf("%d",&vol);
printf("\n");
printf(" minutes over which to b infused =>");
scanf("%d",&min);

int vtbi=vol;				/* vtbi=volume*/
int rate=100*60/min;	

printf(" VTBI %d", vtbi);
printf("\n rate = %d ",rate);
return(0);
} 

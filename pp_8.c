/* To calculate the no of old flush and new flush using the population */



#include<stdio.h>				/* printf,scanf definition*/		
#define new_tflush 2			/* define constant new flush=2*/
#define old_tflush 15			/* define constant old_flush=15*/
#define used_time 14			/* define constant used time=14*/	

int main(void) 					/*reserved word*/
{
int population; 				/* taking population*/

printf(" enter the population ");
scanf("%d",&population);

int no_of_flush=population/3;

int old_flush=no_of_flush*old_tflush;
int new_flush=no_of_flush*new_tflush;


printf("\n old flush=%d",old_flush);

printf("\n new flush=%d",new_flush);
return(0);
}



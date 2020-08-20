/* to calculate the required score to qualify for the given grade */




#include<stdio.h>			/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/

{

char grade;				/* character grade for string the grade */ 
float min_avg,curr_avg;	/* minimum average and current average variable as min_avg and curr_avg as float */
int final;
printf(" enter the designed grade> ");
scanf("%c",&grade);

printf(" enter the minimum average required >");
scanf("%f",&min_avg);

printf("\n enter the current average in course >");
scanf("%f",&curr_avg);

printf(" \n enter how much the final counts as a percentage of the course grade ");
scanf("%d",&final);

float diff=min_avg-curr_avg;

float extra_score=(diff*100/final);
int req_score=curr_avg+extra_score;

printf(" the required score is %d",req_score);
return(0);
}
 

/* to calculate the reimburstment rate  */



#include<stdio.h> /* printf,scanf definition*/
#define rate 0.35	/* defining rate  as constant of 0.35*/
	int main(void)					 	/*reserved word*/
{
float  beg_od,end_od,dist;  /* begining and ending odometer reading as beg_od & end_od and distance as distance in km*/

printf("********************FINDING REIMBURSTMENT******************* /n ");
printf(" enter the begining and ending odometer reading ");
scanf("%f%f",&end_od,&beg_od);

dist=end_od-beg_od;
double r=dist*rate;

printf(" At %0.2f per mile, your reimburtment  is %0.2f",rate,r);
return(0);
}

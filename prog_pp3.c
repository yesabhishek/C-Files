/* to calculate the temperature */ 



#include<stdio.h> 		/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/

{
int t1,t2;				/* T1 AND T2 FOR  TIME VARIABLE HOURS AND MINUTES*/
printf(" enter the time :");
scanf("%d%d",&t1,&t2);

float hrs=t2/60.0;			/* coverting minutes to hours */
float t_hrs=t1+hrs;
printf(" time in hrs %f",t_hrs);
int T=((4*t_hrs*t_hrs)/(t_hrs+2))-20;		/* by usoing the given formuala calculating the temperature as*/
printf(" temperature is %d ",T);
return(0);
}

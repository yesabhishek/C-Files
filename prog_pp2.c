/* to calculate the workdone , power and the watt generated */



#include<stdio.h>	/* printf,scanf definition*/
#define g 10		/* defining g as constant of 10*/
	int main(void)					 	/*reserved word*/


{
int mass=1000;
float height,c_m;		/* height in metre , no of cubic metres */
printf(" enter the height of the dam and no of cubic meters ");
scanf("%f",&height);
scanf("%f",&c_m);
float w=mass*g*height;
float power=0.9*w;
float watt=power/100000000;			/* calculating watt as given values */
printf(" the work done is %f and power is %f nd the watt is %f",w,power,watt);
return(0);
}



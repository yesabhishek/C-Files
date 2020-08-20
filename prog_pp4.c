/* to convert fahrenheit to celsius */ 



#include<stdio.h>			/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/

{
int celsius,f;				/* declaring variable celsius as celsius and fahrenheit as f*/
printf(" enter the tempertature in fahrenheit");
scanf("%d",&f);
celsius=5/9*(f-32);			/* using the given formula calculating the celsius */

printf(" temperature in celsius  is %d",celsius);
return(0);
}



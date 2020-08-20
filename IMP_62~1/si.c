/*Simple Intrest Calculation */
#include <stdio.h>
main()
{
float princpleAmount,time,rate;
float simpleIntrest;
printf("\t\tSimple Intrest Calculation");
printf("\n\nPRINCPLE AMOUNT : ");
scanf("%f",&princpleAmount);
printf("RATE \t\t: ");
scanf("%f",&rate);
printf("TIME \t\t: ");
scanf("%f",&time);
/*Calculations*/
simpleIntrest=(princpleAmount*rate*time)/100;
printf("SIMPLE INTREST =%f",simpleIntrest);
getch();
return(0);
}
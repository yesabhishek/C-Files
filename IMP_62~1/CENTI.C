/* Program : Convert centimeters to feet and inches */

#include<stdio.h>
#include<conio.h>
#define INCHES 2.54
#define FOOT 12

void main()
{
	//variables
	float centimeter,var_inches,var;
	int var_foot;
	clrscr();

	printf("Enter centimeter value : ");
	scanf("%f",&centimeter);

	//convert centimeter to feet and inches
	var_inches = centimeter/INCHES;
	var_foot = var_inches/FOOT;
	var = var_inches-(var_foot*FOOT);

	printf("%d feet and %.1f inches",var_foot,var);
	getch();
}


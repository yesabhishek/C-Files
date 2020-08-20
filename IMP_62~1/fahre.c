#include <stdio.h>
#include <conio.h>
void main()
{
	//variables
	float f,c;
	clrscr();
	printf("ENTER THE TEMPERATURE IN FAR::--");
	scanf("%f",&f);
	c=(5*(f-32))/9;
	printf("THE TEMPERATURE IN CELSIUSIS::-- %f",c);
	getch();
	}
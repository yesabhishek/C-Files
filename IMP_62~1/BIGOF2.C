/*BIGGEST OF TWO NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2;
	clrscr();
	printf("\n\n PROGRAM TO FIND THE BIGGEST OF THE TWO NUMBERS");
	printf("\n\nENTER THE TWO NUMBERS TO COMPARE");
	scanf("%f%f",&n1,&n2);
	if(n1>n2)
	{
		printf("Biggest Number Is %f",n1);
	}
	else
	{
		printf("Biggest Number Is %f",n2);
	}
	
}
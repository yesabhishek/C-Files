/*BIGGEST OF THREE NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2,n3;
	clrscr();
	printf("\n\n PROGRAM TO FIND THE BIGGEST OF THE THREE NUMBERS");
	printf("\n\nENTER THE THREE NUMBERS TO COMPARE\t");
	scanf("%f%f%f",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("Biggest Number Is %f",n1);
		}
		else if(n3>n2)
		{
			printf("Biggest Number Is %f",n3);
		}
	}
	else if(n2>n3)
	{
		printf("Biggest Number Is %f",n2);
	}
	else if(n3>n1)
	{
		printf("Biggest Number Is %f",n3);
	}
	
}
/* Program : Swapping two number */

#include <stdio.h>
#include <conio.h>

void main()
{
	//variables
	int number1,number2,temp;
	clrscr();
	printf("Enter number 1 : ");
	scanf("%d",&number1);

	printf("Enter number 2 : ");
	scanf("%d",&number2);

	//swapping
	temp=number1;
	number1=number2;
	number2=temp;

	printf("After swapping number1 = %d and number2 = %d",number1,number2);
	getch();
}
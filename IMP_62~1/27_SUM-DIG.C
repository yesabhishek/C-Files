/* program : sum of digits of given number */

#include <stdio.h>
#include <conio.h>

void main()
{
	//variables
	int number,sum=0;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&number);

	//sum of digits
	while(number>0)
	{
		sum+=number%10;
		number/=10;
	}
	printf("Sum of digits = %d ",sum);
	getch();
}
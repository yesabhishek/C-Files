/* program : find out whether number is strong number */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	//variables
	int value,number,temp=1,answer=0,cntr,number1;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&number);
	value=number;

	//sum of digits
	while(number>0)
	{
		temp=1;
		number1=number%10;
		for(cntr=number1;cntr>1;cntr--)
		{
			temp=temp*cntr;

		}
		number/=10;
		answer+=temp;
	}
	printf("answer = %d",answer);
	if(value==answer)
		printf("Number is strong number");


	getch();
}
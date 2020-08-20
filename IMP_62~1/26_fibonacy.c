/* program : generate fibonacci series up to n */
#include <stdio.h>
#include <conio.h>

void main()
{
	//variables
	int cntr,range,number1=0,number2=1,number3;
	clrscr();

	printf("Enter range to generate fibonacci series : ");
	scanf("%d",&range);

	printf("%d-->%d-->",number1,number2);

	//generate series.
	for(cntr=2;cntr<range;cntr++)
	{
		number3=number1+number2;
		printf("%d-->",number3);
		number1=number2;
		number2=number3;
	}
	getch();
}
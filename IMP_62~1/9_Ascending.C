/* Program : Ascending three numbers */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	int number1,number2,number3,temp;
	clrscr();

	printf("Enter number 1 : ");
	scanf("%d",&number1);

	printf("Enter number 2 : ");
	scanf("%d",&number2);

	printf("Enter number 3 : ");
	scanf("%d",&number3);

	if(number1>number2)
	{
		temp = number1;
		number1=number2;
		number2=temp;
	}
	if((number3>number1)&&(number3>number2))
		printf("%d %d %d",number1,number2,number3)
	else



	getch();
}

/* Program : find biggest of three numbers using conditional operator*/

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	int number1,number2,number3,big;
	clrscr();

	printf("Enter number 1 : ");
	scanf("%d",&number1);

	printf("Enter number 2 : ");
	scanf("%d",&number2);

	printf("Enter number 3 : ");
	scanf("%d",&number3);

	big = ((number1>number2)&&(number1>number3)?number1:(number2>number3?number2:number3));
	printf("Biggest number is %d",big);

	getch();
}

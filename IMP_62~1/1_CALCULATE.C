/* Program : 1.	Input two numbers and work out their sum, average,
	     product, difference, division */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	int number1,number2,sum,product,difference;
	float average,division;
	clrscr();

	printf("Enter number 1 : ");
	scanf("%d",&number1);

	printf("Enter number 2 : ");
	scanf("%d",&number2);

	//making calculation
	sum = number1 + number2;
	printf("\nSum = %d",sum);

	average = sum/2.0;
	printf("\nAverage = %.2f",average);

	product = number1*number2;
	printf("\nProduct = %d",product);

	difference = number1-number2;
	printf("\nDifference = %d",difference);

	division = (float)number1/number2;
	printf("\nDivision = %.2f",division);
	getch();
}


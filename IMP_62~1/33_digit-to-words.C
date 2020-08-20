/* program 33. If a number 972 is entered through the keyboard, your program
	       should print "Nine Seven Two". Write a program such that it
	       does this for any positive integer.find out whether number
	       is strong number */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	//variables
	int value,number,number1,power=0;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&number);
	value = number;
	//finding power of number
	while(value>0)
	{
		number1=value%10;
		power++;
		value/=10;
	}

	//showing number in words
	while(power>0)
	{
		number1=number/pow(10,power-1);
		switch(number1)
		{
			case 1 : printf("One "); break;
			case 2 : printf("Two "); break;
			case 3 : printf("Three "); break;
			case 4 : printf("Four "); break;
			case 5 : printf("Five "); break;
			case 6 : printf("Six "); break;
			case 7 : printf("Seven "); break;
			case 8 : printf("Eight "); break;
			case 9 : printf("Nine "); break;
			case 0 : printf("Zero "); break;
			default : printf("Wrong Input");
		}
		number=number-(number1*pow(10,power-1));
		power--;
//		printf("number = %d",number);
	}
	getch();
}
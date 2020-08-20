/* 20.	 Write a program to find the sum of cube of first n
	 numbers (using for loop).*/


# include <stdio.h>
# include <conio.h>
# include <math.h>

void main()
{
	//variables
	int i,number,sum=0;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		sum+=pow(i,3);
	}
	printf("Sum of square = %d",sum);
	getch();
}

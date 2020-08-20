/* 19.	 Write a program to find the sum of squares of first n
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
		sum+=pow(i,2);
	}
	printf("Sum of square = %d",sum);
	getch();
}

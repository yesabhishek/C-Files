/* program : find out whether number is armstrong number */

#include <stdio.h>
#include <conio.h>
#include <math.h>

 main()
{
	//variables
	int number,temp,number1,sum=0;
	
	printf("Enter number : ");
	scanf("%d",&number);
	temp=number;

	//sum of digits
	while(number>0)
	{
		number1=number%10;
		sum+=pow(number1,3);
		number/=10;
		printf("number %d",&number);
	}
	if(sum==temp)
		printf("Number is armstrong number");


	getch();
}

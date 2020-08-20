/* Program : sum of n numbers till encounters -999 */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	int sum=0,number;
	clrscr();

	do
	{
		printf("Enter number(-999 to exit) : ");
		scanf("%d",&number);
		if(number!= -999)
			sum += number;
		else
			break;
	}while(number != -999);
	printf("sum = %d",sum);
	getch();
}

/* program . find factorial */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	int cntr,number,fact=1;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&number);
	for(cntr=number;cntr>1;cntr--)
	{
		fact = fact * cntr;
	}
	printf("Factorial of %d is %d",number,fact);
	getch();
}

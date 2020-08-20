/* program . find whether number is prime or not */

# include <stdio.h>

int isPrime(int);

void main()
{
	//variables
	int cntr,number,prime_flag=0;
	clrscr();
	printf("Enter the value:");
	scanf("%d",&number);
}
int isPrime(number)
{
for(cntr=2;cntr<number/2;cntr++)
{
	if(number%cntr==0)
	{
		prime_flag=1;
		break;
	}
}
}

	if(prime_flag == 1)
		printf("Number is not prime");
	else
		printf("Number is prime");
	getch();
}

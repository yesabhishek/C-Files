#include<stdio.h>
#include<conio.h>

void menu();
int factorial(int);
int isPrime(int);
int isArmstrong(int);
int isStrong(int);
int isPalindrome(int);

void main()
{
	int choice,num;

	while(1)
	{
		clrscr();

		menu();
		printf("\nEnter Your choice :");
		scanf("%d",&choice);
		if(choice == 6)
			exit(0);
		printf("Enter a number : ");
		scanf("%d",&num);

		switch(choice)
		{
			case 1:
				printf("factorial(%d) = %d",num,factorial(num));
				break;
			case 2:
				if(isPrime(num))
				{
					printf("%d is a prime number",num);
				}
				else
				{
					printf("%d is not a prime number",num);
				}
				break;
			case 3:
				if(isArmstrong(num))
				{
					printf("%d is a armstrong number",num);
				}
				else
				{
					printf("%d is not a armstrong number",num);
				}
				break;
			case 4:
				if(isStrong(num))
				{
					printf("%d is a strong number",num);
				}
				else
				{
					printf("%d is not a strong number",num);
				}
				break;

			case 5:
				if(isPalindrome(num))
				{
					printf("%d is a palindrome number",num);
				}
				else
				{
					printf("%d is not a palindrome number",num);
				}
				break;

			case 6:
				exit(0);
			default:
				printf("Invalid option");
		}
		getch();
	}
}

void menu()
{
	printf("\n\n\t ******* MENU ********\n\n");
	printf("\n1. Factorial \n");
	printf("\n2. Prime or not \n");
	printf("\n3. armstrong or not \n");
	printf("\n4. strong or not \n");
	printf("\n5. palidrome or not \n");
	printf("\n6.EXIT");
}


int factorial(int num)
{
	int fact=1;
	while(num>=1)
	{

		fact *= num;
		num--;
	}
	return fact;
}

int isPrime(int num)
{
	return 1;
}

int isArmstrong(int num)
{
	return 1;
}
int isStrong(int num)
{
	return 1;
}

int isPalindrome(int num)
{
	return 1;
}



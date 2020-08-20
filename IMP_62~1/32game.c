#include<stdio.h>

//#include<conio.h>



void main()
{
	int userChoice,compChoice,remSticks,TotalSticks;
	char turn;

	clrscr();
	printf("Matchstick game being played between the computer and a user.\n");
	printf("\nRules for the game are as follows:\n");
	printf("\n\n\t1.There are 21 match sticks\n");
	printf("\t2.The computer asks the player to pick 1, 2, 3, or 4 match sticks\n");
	printf("\t3.After the person picks, the computer does its picking\n");
	printf("\t4.Whoever is forced to pick up the last matchstick loses the game\n");

	printf("\nGame starts now....\n");
	remSticks = TotalSticks;

	while(1)
	{
		printf("\nUser's turn  \n");
		turn='u';
		printf("\nEnter ur choice : ");
		scanf("%d",&userChoice);
		if(userChoice > 4 && userChoice < 1)
		{
			printf("\nInvalid choice \n");
			continue;
		}

		remSticks -= userChoice;

		printf("\nRemaining Sticks  : %d\n",remSticks);

		if(remSticks == 1)
		{
			printf("\nComputer LOST\n");
			break;
		}

		printf("\nComputer's turn\n  ");
		turn = 'c';

		printf("\nComputer is picking ....\n");

		compChoice = 5 - userChoice;

		printf("\nComputer choice =%d\n",compChoice);

		remSticks -= compChoice;

		printf("\nRemaining Sticks  : %d\n",remSticks);

		if(remSticks == 1)
		{
			printf("\n**** You LOST *****\n");
			printf("\n**** Computer WON the game *****\n");
			break;
		}
	}
//	getch();
}



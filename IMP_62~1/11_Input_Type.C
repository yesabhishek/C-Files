/* Program : Input a character from the keyboard and find out whether it
	     is a capital letter, small letter, digit or a special symbol. */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	char character;
	clrscr();

	printf("Enter character : ");
	scanf("%c",&character);

	if(character>65 && character<90)
		printf("Character is capital");
	else if (character>97 && character<122)
		printf("Character is small");
	else if (character>48 && character<57)
		printf("Character is digit");
	else
		printf("Character is special character");

getch();
}

/* Program : find consonant or vowel using switch statement */

# include <stdio.h>
# include <conio.h>

void main()
{
	//variables
	char character;
	clrscr();

	printf("Enter character : ");
	scanf("%c",&character);
//	if((character>'a' && character<'z')||(character>'A' && character<'Z'))
  //	{
		switch(character)
		{
			case 'a' :
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' :
			case 'A' :
			case 'E' :
			case 'I' :
			case 'O' :
			case 'U' :printf("vowel");
				 break;
			default: printf("consonant");
				 break;
		}
    //	}
     //	else
       //		printf("Wrong Input");

	getch();
}

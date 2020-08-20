#include<stdio.h>
#include<conio.h>


void main()
{
	int aCount=0,eCount=0,iCount=0,oCount=0,uCount=0,conCount=0;
	char ch;
	clrscr();

	printf("Enter ur text here : \n");

	while((ch=getchar())!='\n')
	{
		switch(ch)
		{
			case 'a':
					aCount++; break;
			case 'e':
					eCount++; break;
			case 'i':
					iCount++; break;
			case 'o':
					oCount++; break;
			case 'u':
					uCount++; break;
			default:
					conCount++;
		}
	}

	printf("No of Characters \n");

	printf("a\t%d;e\t%d;i\t%d;o\t%d;u\t%d;rest\t%d ;",aCount,eCount,iCount,oCount,uCount,conCount);
	getch();
}


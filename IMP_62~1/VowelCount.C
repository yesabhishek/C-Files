#include<stdio.h>
#include<conio.h>


void main()
{
	int a=0,e=0,i=0,o=0,u=0,c=0;
	char ch;
	clrscr();

	printf("Enter ur text here : \n");

	while((ch=getchar())!='\n')
	{
		switch(ch)
		{
			case 'a':
					a++; break;
			case 'e':
					e++; break;
			case 'i':
					i++; break;
			case 'o':
					o++; break;
			case 'u':
					u++; break;
			default:
					c++;
		}
	}

	printf("No of Characters \n");

	printf("a\t%d;e\t%d;i\t%d;o\t%d;u\t%d;rest\t%d ;",a,e,i,o,u,c);
	getch();
}


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char far *vmem = (char far*) 0xB8000000;
	int i=0;
	char ch='A';
	for(i=0;i<4000;i+=2)
	{
		*(vmem+i) = ch;
		*(vmem+i+1) = 10;
		ch++;
		if(ch>90)
			ch=65;

	}
	getch();
	while(!kbhit())
	{
		i=random(4000);
		if(i%2 !=0)
			i++;

		if(*(vmem+i) >= 65 && *(vmem+i) <=90)
		{
			*(vmem+i) = *(vmem+i) + 32;
		}
		else if(*(vmem+i) >=97 && *(vmem+i) <=122)
		{
			*(vmem+i) = *(vmem+i) - 32;
		}
		*(vmem+i+1) = 11;
	       //	sleep(1);
	       delay(1);
	}
	getch();


}

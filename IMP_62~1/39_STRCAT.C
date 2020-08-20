#include<stdio.h>
#include<conio.h>
char *xstrcat(char*,char*);
void main()
{
char *s1,*s2,*s3;
clrscr();
puts("\tenter the first string:\n");
gets(s1);
puts("\tenter the second string:");
gets(s2);
s3=xstrcat(s1,s2);
printf("the concatination of string is %s",s3);
getch();
}

char *xstrcat(char *s4,char *s5)
{
	char *p=s4;
	/*int j,i=0;
	while(*(s4+i)!='\0')
	{
		i++;

	}

	j=i;
	i=0;
	while(*(s5+i)!='\0')
	{
		*(s4+j)=*(s5+i);
		i++;
		j++;




	} */

	while(*s4!='\0')
		s4++;

	while(*s5!='\0')
	{
		*s4=*s5;
		s4++;
		s5++;
	}

	*s4='\0';
	//fs4--;

	return (p);
}


                                      
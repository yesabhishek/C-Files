#include<stdio.h>
#include<conio.h>

int xstrlen(char*);
void xstrcat(char*,char*);
int xstrcmp(char*,char*);
char *xstrcpy(char*,char*);

void main()
{
char *s1,*s2,*s3;
int len,l;
clrscr();

puts("enter the first string:");
gets(s1);
puts("enter the second string:");
gets(s2);

//len=xstrlen(s1);
//xstrcat(s1,s2);
//s3=xstrcpy(s1,s2);
l=xstrcmp(s1,s2);
if(l==0)
printf("strings are similar");
else
printf("strings are not similar");
//printf("\nstring concatentation is%s:",s1);
//printf("\nthe length of string%d",len);
getch();
}

int xstrlen(char*s)
{
int l=0;
while(*s)
{
	l++;
	s++;
}
return l;
}

void xstrcat(char *s4,char *s5)
{
char*a=s4;
while(*s4)
{
	s4++;
}
while(*s5!='\0')
{
	*s4=*s5;
	s4++;
	s5++;
}
*s4='\0';
printf("two stringsare%s",a);
}

char *xstrcpy(char *s6,char *s7)
{
char *b=s6;
	while(*s6)
	{
		*s7=*s6;
		s7++;
		s6++;
	}
*s7='\0';
return b;
printf("the copied string %s",b);
}

int xstrcmp(char *s8,char *s9)
{
	while(*s8==*s9)
	{   if(*s8==NULL)

		return 0;
		s8++;
		s9++;

	}
	  return(*s8-*s9);
}

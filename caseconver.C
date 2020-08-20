#include<stdio.h>
#include<conio.h>
main() { int i;char s[10];
clrscr();printf("\n Enter  a string in any case:");gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[i] >= 'A') && (s[i] <='Z')) printf("%c",s[i]+32);
else if((s[i] >= 'a') && (s[i] <='z'))
printf("%c",s[i]-32); }
}
#include<stdio.h>
#include<conio.h>
main() { int i; char str[80]; clrscr(); printf("\n Enter a string:");gets(str);
printf("\n Using length of string:");
i = strlen(str);
for(i--;i>=0;i--) printf("%c",str[i]); getch(); }
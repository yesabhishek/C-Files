/* Remove space between words*/
#include<stdio.h>
#include<conio.h>
main() { int i; char s[50];clrscr(); printf("\n Enter few words:");
gets(s); for(i=0;s[i]!='\0';i++) {
if(s[i]==' ') { printf("%c",s[i+1]);i++;} else printf("%c",s[i]);}getch();
}
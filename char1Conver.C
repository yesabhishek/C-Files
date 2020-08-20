#include<stdio.h>
#include<conio.h>
main() { int i,j;
char s[80],low;
char convert(char low);
clrscr();printf("\n Enter a string:"); gets(s);  printf("%c",toupper(s[0]));
for(i=0;s[i]!='\0';i++) {
if(s[i]==' ') {
printf(" "); j = i+1; printf("%c",toupper(s[j]));
} else printf("%c",convert(s[i+1]));
} getch();  }

char convert(char ch1) {
char ch2;
ch2 = (ch1>='A' && ch1 <='Z')?ch1+32:ch1; return ch2;
}
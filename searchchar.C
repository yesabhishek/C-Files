/* How namy times a given character is present in a string */
#include<stdio.h>
#include<conio.h>
main() { int cnt[10],i,j; char str[20],ch[20]; clrscr(); printf("\n Enter a string:");gets(str);
for(j=0;str[j]!='\0';j++) {ch[j] = str[j];cnt[j] = 0;
printf("\n %c Found at the following positions:",ch[j]);
for(i=0;str[i]!='\0';i++)  { if(str[i]=='\0') printf("-1");
if(str[i] == ch[j]) { cnt[j]++ ;
printf("%d,",i+1); }}  }
for(j=0;j<strlen(str);j++)
printf("\n Number of %c = %d",ch[j],cnt[j]); getch(); }
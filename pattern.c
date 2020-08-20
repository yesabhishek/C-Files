/* Pattern matching */
#include<stdio.h>
#include<conio.h>
main()
{ int i,j,cnt=0,st =0; char s[80],p[30];
clrscr(); printf("\n ENTER FEW SENTENCES:"); gets(s);
printf("\n Enter the string pattern to be searched for:"); gets(p);
for(i=st,j=0;s[i]!='\0' && p[j]!='\0'; ) {
if(s[i]==p[j]) { i++;j++;} else { j=0;st++;i=st;}
if(p[j]=='\0') {cnt++; printf("\n Pattern found at position %d",st);}
 }
 printf("\n No of times %s occurs is %d",p,cnt);
   }
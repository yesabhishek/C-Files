/* String replacement from given position*/
#include<stdio.h>
#include<conio.h>
main() { int pos,i,j; char s1[80],s2[80]; clrscr();
printf("\n Enter a string:");gets(s1);
printf("\n Enter string to be replaced with:");gets(s2);
printf("\n Enter position:");scanf("%d",&pos);
//for(j=0;j<strlen(s2);j++){ for(i=pos-1;s1[i]!='\0';i++) s1[i]= s1[i+1]; } for deletion
for(i=0;i<pos;i++);
for(j=0;s2[j]!='\0';j++){ s1[pos-1] = s2[j]; pos++;}puts(s1);
//for( ;i>pos-1;i--) s1[i+1] = s1[i];
}
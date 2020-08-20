/* i/p:123.28  o/p: 6.10*/
#include<stdio.h>
#include<conio.h>
main()
{
 float temp,x;
int i=0,sum=0;
 char chk[10];
clrscr();
 printf("\n Enter a real number(Number.99999 format): ");
 scanf("%s",&chk);
for(i=0;chk[i]!='.';i++)
 sum = sum + (int)(chk[i])-48;
printf("\n Result is:");
printf("%d",sum);
 printf("."); 
sum=0;
for(i=i+1;chk[i]!='\0';i++) 
sum = sum + (int)(chk[i])-48;
printf("%d",sum);
getch(); }

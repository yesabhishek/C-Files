#include<stdio.h>
#include<conio.h>
main() { int i =0,j=0,mult =1,n;clrscr();
printf("\n Enter a number:");scanf("%d",&n);
for(i=1;i<=n;i++)
{ mult = 1;
for(j=1;j<=i;j++) {mult = mult *j; printf("%d",mult); printf("\t"); }printf("\n"); } getch(); }
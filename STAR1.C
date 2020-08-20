#include<stdio.h>
#include<conio.h>
main() { int i =0,j=0,n;
clrscr();
printf("\n Enter a number:");scanf("%d",&n);
for(i=n;i>0;i--) { for(j=1;j<=i;j++) {printf("\t *");} printf("\n"); } }
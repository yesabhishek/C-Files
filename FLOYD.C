#include<stdio.h>
#include<conio.h>
main() { int i =0,j=0,n;clrscr();
printf("\n Enter a number:");scanf("%d",&n);
for(i=1;i<=n;i++) { for(j=1;j<=i;j++) {printf("\t %d",j);} printf("\n"); } }
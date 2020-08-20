#include<stdio.h>
#include<conio.h>
main() { int i =0,j=0,n,no=1;
clrscr();
printf("\n Enter a number:");scanf("%d",&n);
for(i=1;i<=n;i++) { if((no%2)!=0) no=0; else no =1;
printf("\n");
for(j=1;j<=i;j++) { if(no==0)  no++;else if(no==1) no--;
printf("\t %d",no);} } getch(); }
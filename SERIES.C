/* 1+2+3....n= n(n+1)/2 */
#include<stdio.h>
#include<conio.h>
main() 
{
 int n,sum=0,avg=0;
clrscr();
printf("\n Enter a number:");
scanf("%d",&n);
sum = n* (n+1)/2;
avg = sum/n;
printf("\n Sum = %d",sum); 
printf("\t Avg = %d",avg);
 getch(); 
}
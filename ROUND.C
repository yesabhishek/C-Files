#include<stdio.h>
#include<conio.h>
main()
{ float temp,x;int i=0,pos;
void round(float);
clrscr(); printf("\n Enter a real number(Number.99999 format): "); scanf("%f",&temp);
i = temp;
printf("\n Rounded to 2 decimal places is %d.",i); round(temp-i);
getch(); }
void round(float n) {
long int p=0,rem=0,m;
m = n * 1000 * 100; rem = m % 10;
while(rem>0) { p = m/10;
if(p<5) break; m = m/10; p++; rem =m%10; }
printf("%ld",m);
  }

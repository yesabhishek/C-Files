#include<stdio.h>
#include<conio.h>
void main()
{
int b,no[9],m,soe=0,soo=0;
clrscr();
for(int i=0;i<=9;i++)
{
printf("enter a no.");
scanf("%d", no[i]);
}
for(i=0;i<=9;i++)
{
if(no[i]%2=0)
{
soe=soe+no[i];
}
else 
{
soo=soo+no[i];
}
}
printf("sum of odd is %d & sum of even is %d", soe, soo);
getch();
}
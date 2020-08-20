#include<stdio.h>
#include<conio.h>
void main()
{
int hrs;
clrscr();
printf("enter the no. of working hours:\n");
scanf("%d", &hrs);
if(hrs<2)
{
printf("worker is outstanding, should be promotion & appraisals");
}
if ((hrs>=2)&&(hrs<3))
{
printf(" worker is highly efficient , should b given STAR rating");
}
else if((hrs>=3)&&(hrs<4))
{
printf(" worker needs to increase speed, should b given MERITIOUS rating");
}
else if((hrs>=4)&&(hrs<5))
{
printf(" worker needs training to improve speed , should b given ADEQUATE rating");
}
else if(hrs>=5)
{
printf(" worker needs training to leave , should b given TRAILER rating");
}
else printf("entry unambiguous");
getch();
}

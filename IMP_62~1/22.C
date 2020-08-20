# include <stdio.h>
# include <conio.h>
void main()
{
int a[10],n,i,sum=0;
clrscr();
for (i=1;i<=10;i++)
{
printf("ENTER THE NUMBER::---");
scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
a[i]=a[i]*a[i];
for(i=1;i<=10;i++)
printf("\nthe numbers are %d",a[i]);
for(i=1;i<=10;i++)
sum=sum+a[i];
printf("\nTHE SUM OF 10 NUMBERS ARE %d",sum);
getch();
}



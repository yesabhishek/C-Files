# include <stdio.h>
# include <conio.h>
void main()
{
int a[10],i,s=0;
float avg;
clrscr();
for(i=1;i<=10;i++)
{
printf("ENTER THE %d NUMBER:--" ,&i);
scanf("%d",&a[i] );
}
for(i=1;i<=10;i++)
printf("\nthe numbers are %d",a[i]);
for(i=1;i<=10;i++)
s=s+a[i];
printf("\nTHE SUM OF THE NUMBERS ARE %f",s);
avg=s/10;
printf("\nTHE AVERAGE OF THE MUMBER IS %2.2f",avg);
getch();
}


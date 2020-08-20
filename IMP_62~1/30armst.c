#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,nos[],i,j,a,b,c,d;
for(i=1,j=0;i<=500;i++,j++)
{
nos[j]=i;
}
for(i=0,j=0;i<=499;i++)
{
a=nos[i]/100;
b=(nos[i]/10)%10;
c=(nos[i]%100)%10;
d=(a*a*a)+(b*b*b)+(c*c*c);
if(nos[i]=d) sum=sum+nos[i];
else 
{
}
}
printf("sum of nos from 1 to 500 is %d", sum);
}
getch();
}
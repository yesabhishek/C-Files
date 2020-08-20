#include<stdio.h>
#include<conio.h>
void main() {
int n[10],up=10,low=0,i=0,no,num;
void quick(int[],int,int);
clrscr(); printf("\n Enter how many numbers(max 10):");
scanf("%d",&no);
for(i=0;i<no;i++) { printf("\n Element %d:",i+1);scanf("%d",n[i]);}
quick(n,low,up);
for(i=0;i<2;i++) printf("%d,",n[i]);
}

void quick(int x[],int lb, int ub)
{
int j=lb;
if(lb<ub) { partition(x,lb,ub,&j); quick(x,lb,j-1); quick(x,j+1,ub); }
}
partition(int x[],int lb,int ub, int *ptr)
{
int a,down,up,temp;
a = x[lb];
up = ub;
*ptr = down = lb;
while(down < up)
{
while((x[down]<=a) && (down<up))
down++;
while(x[up]>=a)
up--;
if(down < up)
{
temp = x[down];
x[down] = x[up];
x[up] = temp;}
}/* end of while*/
x[lb] = x[up];
x[up] = a;
*ptr = up;
}/* end of function*/

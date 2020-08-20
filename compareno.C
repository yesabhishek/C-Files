/* Print how many numbers are >, <, = constant value */
#include<stdio.h>
#include<conio.h>
void main() 
{ 
int x,i,j,n,temp,a[10],cnt1=0,cnt2=0,cnt3=0;
clrscr();
printf("\n How many numbers(max 10):");
scanf("%d",&n);
printf("\n Enter a constant with which you want to compare:");
scanf("%d",&temp);
printf("\n Enter elements to be compared: ");
for(i=0;i<n;i++) 
{
printf("\n Enter element %d :",i+1);
 scanf("%d",&a[i]); 
}
for(i=0;i<n;i++) 
{ 
 if(a[i] == temp) cnt1++; 
 if(a[i] > temp) cnt2++; 
 if(a[i] < temp) cnt3++; } 
printf("\n %d numbers = %d:",cnt1,temp);
printf("\n %d numbers > %d:",cnt2,temp);
printf("\n %d numbers < %d:",cnt3,temp);
getch();
 }
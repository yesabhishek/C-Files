/*Addition of co-ordinates for n degree polynomial*/
#include<stdio.h>
#include<conio.h>
main() {
int p1[10],p2[10],i,n1; clrscr();
printf("\n Enter Maximum Degree of Polynomial"); scanf("%d",&n1);
printf("\n Enter First Polynomial");
for(i=0;i<=n1;i++) {
printf("\n Enter Co-ordinate degree for %d:", n1-i); scanf("%d",&p1[i]);}
printf("\n Enter Second Polynomial");
for(i=0;i<=n1;i++) {
printf("\n Enter Co-ordinate degree for %d:", n1-i); scanf("%d",&p2[i]);}
for(i=0;i<=n1;i++)
printf("%d x^%d+",p1[i]+p2[i],n1-i);
printf("\b");
}













































































































































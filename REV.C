#include<stdio.h>
#include<conio.h>
int sum = 0;
main() {
int n,no,q,s=0;clrscr();
printf("\n Enter Number:");scanf("%d",&no);
printf("\n USING FUNCYTION:: \n The Reverse of %d is:",no);
n= no; rev(no);printf(" and sum of digits is %d ",sum);
printf("\n\n WITHOUT USING FUNCTION:: \n The Reverse of %d is",n);
while(n>0){ q=n%10;printf("%d",q);s = s+q;n=n/10;}
printf(" and sum of digits is %d ",s);
}
rev(int no){
int p;
if(no==0) return;
p = no%10; printf("%d",p);
rev(no/10);
sum = sum + p; }
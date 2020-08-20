#include<stdio.h>
#include<conio.h>
main(){ int a=0,b=1,c,i=0,n,no,tag=0; clrscr();
printf("\n Enter limit:"); scanf("%d",&n);
printf("\n Enter number to search in fibbo series:");scanf("%d",&no);
while(n<=0){ printf("\n INCORRECT INPUT! \n  INPUT AGAIN::"); scanf("%d",&n);}
printf("%d,",a);printf("%d,",b);
while(i<n-2) { c = a+b; printf("%d,",c); a = b; b =c; i++;
if(no==c) {printf("\n Found!");tag = 1; break;} }
if(tag==0) printf("\n Not Found!"); getch();
}

#include<stdio.h>
#include<conio.h>
main() {
int ans =1;
do { int i =0,j=0;char a,b,ch; clrscr();
printf("\n ENTER TWO CHARACTERS:");scanf("%c%c%c",&a,&ch,&b);flushall();
i =a;j =b;
if(i>j) printf("\n %c is greater than %c",a,b);
else if(j>i) printf("\n %c is greater than %c",b,a);
else printf("\n %c is same as %c",a,b);
printf("\n Do u wish to continue?(1/0)"); scanf("%d",&ans);
}while(ans ==1); }
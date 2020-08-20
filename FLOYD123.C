/*
1
2  3
4  5  6
7  8  9  10 */
#include<stdio.h>
#include<conio.h>
main()
{ int no1=0,no=1,cnt=1,n;
clrscr(); printf("\n ENTER A NUMBER::");scanf("%d",&n);
while(no1<=n) { while(no<no1) {
printf("\t %d",cnt); no = no+1; cnt=cnt+1;}
printf("\n"); no1 = no1+1; no=1; }
}

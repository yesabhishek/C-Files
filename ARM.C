// 153 is an armstrong number.
#include<stdio.h>
#include<conio.h>
main() { int s=0,p,q,num=2;
clrscr();printf("\n ENTER A NUMBER:"); scanf("%d",&num);
q = num; do {p = num%10; s =s+(p*p*p); num = num/10; } while(num!=0);
if(s==q) printf("Armstrong Number!"); else printf("Not an Armstrong number!");
}

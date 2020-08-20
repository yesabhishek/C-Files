/* One x raised to y without using math function pow*/
#include<stdio.h>
#include<conio.h>
main() { int sum =1,x,y,i=1; clrscr();
printf("\n ENTER THE VALUE OF x:");scanf("%d",&x);
printf("\n ENTER THE VALUE OF y:");scanf("%d",&y);
if(y<0) {y  *= -1 ; while(i<=y) { sum *= 1/x; i++;}
} else { while(i<=y) {sum *=x; i++; }}
printf("\n The answer is: %d",sum); getch();
}
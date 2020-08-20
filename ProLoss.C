#include<stdio.h>
#include<conio.h>
main() {  char ans = 'y' || 'Y'; do { float cp,sp,gain,loss; clrscr(); printf("\n Enter CP: ");scanf("%f",&cp); printf("\n Enter SP: ");scanf("%f",&sp);
if(cp>sp) {gain = cp - sp;printf("\n Gain = %f",gain); } else {loss = sp-cp; printf("\n Loss = %f",loss);}
printf("\n CONTINUE(y/n)");ans = getch(); }while(ans =='y'|| ans=='Y'); }

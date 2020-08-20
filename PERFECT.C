#include<stdio.h>
#include<conio.h>
main() { 
/* Perfect number is one whose sum of factors = the number itsef*/
float sum;int i=1,c; long int no=2;
clrscr();
printf("\n\n THE FIRST 4 PERFECT NUMBERS ARE AS FOLLOWS: \n");
do{ sum=1;c=2; while(c<=(no/2)) {if((no%c)==0) sum = sum+c; c++;}
if(sum==no){ printf("\t %d",no);i++; }no++; } while(i<=4);
}
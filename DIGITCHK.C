/* Check if a number is 3 digit or not */
#include<stdio.h>
#include<conio.h>
main() { int no,rem,i=0; printf("\n Enter any number:"); scanf("%d",&no);
while(i<3) { rem = no %10; no = no/10; i++;}
if(no ==0) printf("\n 	This is a 3 digit number!"); else printf("\n This is not a 3 digit number!"); 
}
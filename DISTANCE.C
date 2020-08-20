#include<stdio.h>
#include<conio.h>
main() {
long int dist1,dist2,dist3,dist4,dist; clrscr();
printf("\n Enter Distance travelled in Kms:");scanf("%ld",&dist);
dist1 = dist * 100000; dist2  = dist * 1000; dist3 = dist * 6250; dist4 = dist * 75000;
printf("\n Distance in cm: %ld",dist1);
printf("\n Distance in m: %ld",dist2);
printf("\n Distance in feet: %ld",dist3);
printf("\n Distance in inches: %ld",dist4);
getch();
}
#include<stdio.h>
#include<conio.h>
#define pi 3.145
main() 
{ 
char ans='y' || 'Y'; 
do
{ 
float rad,vol,area;  
clrscr();
printf("\n ENTER RADIUS OF SPHERE:"); 
scanf("%f",&rad);
vol = (4*pi*rad*rad*rad)/3;
area = (4*pi*rad*rad);
printf("\n Area is %f and Volume is %f",area,vol);
printf("\n Do you want to continue?(y/n)"); 
ans = getch(); 
}
while(ans=='y'||ans=='Y');
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
main() { 
float a=1,b=1,c=1,d=1,y1,y2; int ans=1,r; char ch1,ch2;
do{ clrscr();
printf("\n QUADRADIC EQUATION IS OF FORM: a.x.x + b.x +c =0");
printf("\n\b ENTER REAL VALUE FOR a:"); scanf("%f",&a);
printf("\n\b ENTER REAL VALUE FOR b:"); scanf("%f",&b);
printf("\n\b ENTER REAL VALUE FOR c:"); scanf("%f",&c);
d = pow(b,2) - 4*a*c;printf("d = %f",d);
if(d>=0) { r = sqrt(d); y1 = (-b+r)/(2*a); y2 = (-b-r)/(2*a);}
if(d<0) printf("\n Roots %f , %f . are complex !",y1,y2); if(d>0) printf("\n Roots  %f , %f . are real and distinct !",y1,y2);
if(d==0) printf("\n Roots %f , %f . are real and equal!",y1,y2);
printf("\n Do you want to continue(1/0)?"); scanf("%d",&ans);
}while(ans==1); }

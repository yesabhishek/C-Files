#include<stdio.h>
#include<conio.h>
void main() { char ans = 'y'; do{ int x,y,cnt=1,sum=0,both_neg=0,one_neg=0;
printf("\n ENTER TWO NUMBERS:");printf("\n Enter 1st Number:");scanf("%d",&x);
printf("\n Enter 2nd Number:");scanf("%d",&y);flushall();
if(x<0 && y<0) both_neg=1;
else if ((x<0)||(y<0)) one_neg=1;
if(x<0) x = x*(-1); if(y<0) y = y*(-1);
while(cnt<=y) { sum = sum+x; cnt++;} cnt = 0;
while(x != 0) {x = x -y; cnt++; }
if(one_neg==1) { printf("\n\t The answer is -%d",sum); printf("\n\t The division answer is -%d",cnt); }
else {printf("\n\t The answer is %d",sum); printf("\n\t The division answer is %d",cnt);}
printf("\n Do you want to continue?(y/n)"); scanf("%c",&ans);
} while((ans == 'y')||(ans == 'Y'));
}

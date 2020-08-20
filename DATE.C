#include<stdio.h>
#include<conio.h>
main()
{ int dd,mm,yyyy,mm1;
char ch;clrscr();
printf("\n ENTER DATE(DD/MM/YYYY)::");scanf("%d%c%d%c%d",&dd,&ch,&mm,&ch,&yyyy);
if(dd >31) { printf("%d is invalid Day!",dd); return;}
else while(yyyy<1 || yyyy> 32767) { printf("%d is invalid Year!",yyyy); printf("%d is invalid Year!",yy);  printf("\n Enter year again"); scanf("%d",&yy); }
switch(mm) {
case 2:{ if((yyyy%4==0) || (yyyy%400 ==0)) {
		while(dd > 29 || dd<=0) { printf("%d th is an invalid day for month %d  of a leap year",dd,mm); return;}
	       }
	    else
	       { while(dd>28||dd<=0) { printf("%d th is an invalid day for month %d ",dd,mm); printf("\n Invalid Input! \n Enter Date again:"); scanf("%d",&dd); }  }
             }
case 1:case 3:case 5: case 7: case 8: case 10: case 12: while(dd>=32 || dd<=0) { printf("\n Invalid Input! \n Enter Date again:"); scanf("%d",&dd);}
case 4:case 6:case 9: case 11: { while(dd >= 31) { printf("%d th is an invalid day for %d th month",dd,mm); return; break; }}
default: while(mm<0 || mm>12) {printf("%d is invalid Month!",mm);  printf("\n Enter month again"); scanf("%d",&mm);}
	   } printf("VALID DATE!");
 }
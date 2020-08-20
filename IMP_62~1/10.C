/* program to find out the avwrage of marks of a student */

# include <stdio.h>
# include <conio.h>

void main()
{
/*DECLARATION OF VARIABLE*/
char c;
int e,m,s,h,g,s1;
float a;
clrscr();
printf("ENTER THE STUDENT NAME:------");
scanf("%c",&c);
printf("ENTER THE MARK IN ENGLISH::--");
scanf("%d",&e);
printf("ENTER THE MARK IN MATH::---- ");
scanf("%d",&m);
printf("ENTER THE MARK IN SCIENCE::---- ");
scanf("%d",&s);
printf("ENTER THE MARK IN HISTORY::---- ");
scanf("%d",&h);
printf("ENTER THE MARK IN GEOGRAPHY::---- ");
scanf("%d",&g);
s1=e+m+s+h+g+s;
a=s1/5;
if (a>=60)
{
printf("THE STUDENT NAME IS --\n\t\t\t\t\t\t%c\n",c);
printf("\t\t\t\t-----------------------------\n");
printf("\n\t\t\tTHE MARK SECURED IN ENGLISH-%d\n\t\t\tTHE MARK SECURED IN MATH-%d\n\t\t\tTHE MARK SECURED IN SCIENCE-%d\n\t\t\tTHE MARK SECURED IN HISTORY-%d\n\t\t\tTHE MARK SECURED IN GEOGRAPHY-%d\n",e,m,s,h,g);
printf("\n\t\t\t%c STANDS IN FIRST DIVISION",c);
}
else if((a>=50) && (a<60))
{
printf("\THE STUDENT NAME IS ---\n\t\t\t\t\t\t%c\n",c);
printf("-----------------------------");
printf("\n\t\t\tTHE MARK SECURED IN ENGLISH-%d\n\t\t\tTHE MARK SECURED IN MATH-%d\n\t\t\tTHE MARK SECURED IN SCIENCE-%d\n\t\t\tTHE MARK SECURED IN HISTORY-%d\n\t\t\tTHE MARK SECURED IN GEOGRAPHY-%d\n",e,m,s,h,g);
printf("\n\t\t\t%c STANDS IN SECOND DIVISION",c);
}
else if((a>=40) && (a<50))
{
printf("THE STUDENT NAME IS ---\n\t\t\t\t\t\t%c\n",c);
printf("-----------------------------\n");
printf("\n\t\t\tTHE MARK SECURED IN ENGLISH-%d\n\t\t\tTHE MARK SECURED IN MATH-%d\n\t\t\tTHE MARK SECURED IN SCIENCE-%d\n\t\t\tTHE MARK SECURED IN HISTORY-%d\n\t\t\tTHE MARK SECURED IN GEOGRAPHY-%d\n",e,m,s,h,g);
printf("\n\t\t\t%c STANDS IN THIRD DIVISION",c);
}
else
{
printf("THE STUDENT NAME IS ---\n\t\t\t\t\t\t%c\n",c);
printf("-----------------------------");
printf("\n\t\t\tTHE MARK SECURED IN ENGLISH-%d\nTHE MARK SECURED IN MATH-%d\n\t\t\tTHE MARK SECURED IN SCIENCE-%d\n\t\t\tTHE MARK SECURED IN HISTORY-%d\n\t\t\tTHE MARK SECURED IN GEOGRAPHY-%d\n",e,m,s,h,g);
printf("\n\t\t\t%c FAIL TO PASS",c);
}
getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
int i,cnt=0,cnt1=0; char arr[100]; clrscr();
printf("\n ENTER FEW SENTENCES:"); gets(arr);
for(i=0;i<strlen(arr);i++) { if(arr[i] ==' ' || arr[i] == ',' || arr[i] == ';' ||arr[i] ==' ' || arr[i] == ':' ) cnt++; }
for(i=0;i<strlen(arr);i++) { if(arr[i] =='.' || arr[i] == '?' || arr[i] =='!' ) cnt1++; }
printf("\n Number Of Characters:: %d",i);
printf("\n Number Of Words:: %d",cnt+1);
printf("\n Number Of Sentences:: %d",cnt1);
getch(); }

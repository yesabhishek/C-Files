/*  This program accepts position and number of characters to be copied from a string 
and copies the specified number of characters from that position and prints it */
#include<stdio.h>
#include<conio.h>
main() {
int p,i=0,j,n; char str1[80], str2[80]; clrscr();
printf("\n Enter a string:"); scanf("%s",str1); j = strlen(str1);
printf("\n Enter position from which the string is to be copied:"); scanf("%d",&p);
printf("\n Enter number of characters to be copied from the string:"); scanf("%d",&n);
while(((p+n)>j)||(p<0)||(n<0)) { printf("\n Invalid Input! Input Again:");clrscr();
printf("\n Enter a string:"); scanf("%s",str1); j = strlen(str1);
printf("\n Enter position from which the string is to be copied:"); scanf("%d",&p);
printf("\n Enter number of characters to be copied from the string:"); scanf("%d",&n);}
for(i=p-1;i<=n+1;i++) { str2[i-(p-1)] = ' '; str2[i-(p-1)] = str1[i];} str2[i-(p-1)]= '\0';i++;
printf("\n The resultant string is :");
for(i=0;i<strlen(str2);i++) printf("%c",str2[i]); getch();
}

/*  This program accepts position and number of characters to be deleted from a string
and deletes the specified number of characters from that position and prints the string*/
#include<stdio.h>
#include<conio.h>
main() {
int p,i=0,j,n; char str1[80]; clrscr();
printf("\n Enter a string:"); scanf("%s",str1); j = strlen(str1);
printf("\n Enter position from which the string is to be deleted:"); scanf("%d",&p);
printf("\n Enter number of characters to be deleted from the string:"); scanf("%d",&n);
while(((p+n)>j)||(p<0)||(n<0)) { printf("\n Invalid Input! Input Again:");clrscr();
printf("\n Enter a string:"); scanf("%s",str1); j = strlen(str1);
printf("\n Enter position from which the string is to be copied:"); scanf("%d",&p);
printf("\n Enter number of characters to be deleted from the string:"); scanf("%d",&n);}
for(i=p-1;i<=n+1;i++) str1[i] = str1[i+n]; i++;str1[i]= '\0';
printf("\n The resultant string is :");
for(i=0;str1[i]!='\0';i++) printf("%c",str1[i]); getch();
}

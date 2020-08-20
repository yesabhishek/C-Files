/* copy n characters from the last */
#include<stdio.h>
#include<conio.h>
main() { int n,i,j; char str[80],str1[80],str2[80]=""; clrscr(); printf("\n Enter a string:");gets(str);
 for(i=strlen(str),j=0;i>=0;i--,j++) str1[j] = str[i];
printf("\n Enter number of characters to be copied:");scanf("%d",&n);
printf("The reverse string is:");
for(j=0;i<strlen(str1);j++) printf("%c",str1[j]);
for(i=0;i<=n;i++) { str2[i] = ' '; str2[i] = str1[i];} str2[i]= '\0';
printf("\n The resultant string is :");
for(i=0;i<strlen(str2);i++) printf("%c",str2[i]); 
getch(); }
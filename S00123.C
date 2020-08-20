#include<stdio.h>
#include<conio.h>
main() {
int i,cnt=0;
char str[10];
clrscr();
printf("\n Enter A Number:");scanf("%s",&str);flushall();
for(i=0;i<strlen(str);i++) {
if(str[i]=='0') cnt++;
else
printf("%c",str[i]);
}
for(i=0;i<cnt;i++) printf("0");
}
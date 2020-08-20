/* return 1 if string occurs at end of the given string o.w. returns 0 using pointers */
#include<stdio.h>
#include<conio.h>
main() {
char s[20],t[20]; int i;
int strend(char [],char []);
printf("\n Enter a string:"); gets(s);  printf("\n Enter search string:"); gets(t);
if(strend(s,t)==1) puts("String occured at end!"); else puts("String did not occured at end!"); 
}
int strend(char *p,char *q) {
int cnt =0, flag =1;
while(*p++!='\0'); while(*q++!='\0') cnt++;
p--;q--;
while(cnt>=0) { if(*p--!=*q--) flag=0; cnt--; } return flag;
}
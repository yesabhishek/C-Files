/* In Options Directory,  The source directory should be c-progs and output directory should also be c-progs for file programs*/
#include<stdio.h>
#include<conio.h>
void main() { FILE *fp; char ch,s[15]; int cc=0,cn=0,cw=0; clrscr();
printf("\n Enter a File Name::");gets(s); 
printf("\n NOTE::Each line terminated by *");
fp = fopen(s,"rw");
if(fp!=NULL) {
while(fgetc(fp)!=EOF) {ch=fgetc(fp); cc++;
if((ch==' ') || (ch =='.') ||  (ch =='!') || (ch =='?')) cw++;
if(ch == '*') cn++; }
printf("\n NUMBER OF CHARACTERS = %d",cc);
printf("\n NUMBER OF WORDS = %d",cw);
printf("\n NUMBER OF LINES = %d",cn);
fcloseall();
} else if(ch==EOF) { printf("\n FILE CANNOT BE OPENED!"); fcloseall();exit(); }
}
#include<stdio.h>
main(int argc,char  *argv[]) { FILE *fp1, *fp2; char ch;
clrscr(); if(argc!=3) {printf("\n Insufficient number of parameters!"); exit();}
fp1 = fopen(argv[1],"r"); if((fp1==NULL)) { printf("\n FILE %s CANNOT BE OPENED!",argv[1]); }
else if(fp1!=NULL) {
	fp2 = fopen(argv[2],"w");
	if(fp2==NULL)  { printf("\n FILE %s CANNOT BE OPENED!",argv[2]); exit();}
	else { while (fgetc(fp1)!=EOF) {ch=fgetc(fp1); fputc(ch,fp2);} }
	   }

printf("\n File  %s is copied!",argv[1]);
fcloseall();
}
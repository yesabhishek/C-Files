/* For storing odd numbers and even numbers in separate files from a file storing integers */
#include<stdio.h>
main(int argc,char  *argv[]) { FILE *fp1, *fp2, *fp; int temp;
clrscr();
fp = fopen("Data.dat","r"); fp1 = fopen("Even.dat","w"); fp2 = fopen("Odd.dat","w");
if(fp1!=NULL) {
	fp2 = fopen(argv[2],"w");
        if(fp2==NULL)  { printf("\n FILE %s CANNOT BE OPENED!",argv[2]); exit();}
	else { while (fscanf(fp,"%d",&temp)!=NULL) { if(temp%2 ==0) fprintf(fp1,"%d",temp); else fprintf(fp2,"%d",temp);} }
           }
              else { printf("\n FILE %s CANNOT BE OPENED!",argv[1]);exit();  }
fcloseall();
}
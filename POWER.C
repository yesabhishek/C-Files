#include<stdio.h>
main(int argc, char *argv[]) {
int i,p;
if(argc!=3) printf("\n ERROR IN PASSING NUMBER OF PARAMETERS!"); 
else {
i = (*argv[2] - 48);
for(p=1;i>0;i--) p =  p*((*argv[1])-48);
printf("\n %d RAISED TO %d = %d",*argv[1]-48,*argv[2]-48,p);
}
getch();
}
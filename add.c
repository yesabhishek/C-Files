#include<stdio.h>
int main(int argc,char *argv[])
{
int a,b,sum;
if(argc!=3)
{
printf("Program name val1<val2\n");
return -1;
}
a=atoi(argv[1]);
b=atoi(argv[2]);
sum=a+b;
printf("sum of %d %d is %d",a,b,sum);
return 0;
}


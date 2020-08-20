/* String replacement*/
#include<stdio.h>
#include<conio.h>
main()
 {
 long int n;
clrscr();
printf("\n Enter DOB(ddmmyyyy format):");
scanf("%ld",&n);
 Lucky(n);
}
Lucky(long int n)
 {
long int sum =0;
label:  while(n>0) 
{
 sum = sum + (n%10); 
n = n/10;
 }
if(sum > 9)
 
{
n = sum;
 sum = 0; 
goto label;
}
printf("Lucky Number is %ld",sum);
}
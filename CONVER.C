#include<stdio.h>
#include<conio.h>
void main() 
{
int no; 
clrscr();
printf("\n ENTER A  NUMBER IN DECIMAL FORMAT:");
scanf("%d",&no); 
binary(no);
hex(no); 
getch(); 
}
binary(int no) 
{
int binary[16], cnt=0,r;
printf("\n Binary Of %d is::",no);
while(no!=0) 
{
 r = no%2; 
binary[cnt++] = r; 
no /=2;  
}
for(--cnt;cnt>=0;cnt--) 
printf("%d",binary[cnt]);
}
hex(int no) 
{ 
int hex[5], cnt=0,r;
printf("\n Hexadecimal Of %d is:: 0x",no);
while(no!=0) 
{
r = no%16; 
hex[cnt++] = r; 
no/=16; 
}
for(--cnt;cnt>=0;cnt--) 
{
if(hex[cnt]>9) 
printf("%c", hex[cnt]+55);
else
printf("%d",hex[cnt]);
}
 }

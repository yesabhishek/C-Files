//wap to convert a binary no to integer

#include<stdio.h>
int main()
{
	
	int num,base=1,rem=0,dec=0;
	printf(" enter the number ");
	scanf("%d",&num);
	while (num>0)
	{
		rem=num%10;
		dec=rem*base;
		num=num/10;
		base=base*2;
			
	
	}
	printf(" the no is %d",&dec);
}

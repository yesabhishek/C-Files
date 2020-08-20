#include<stdio.h>
#include<math.h>
int main()
{
	int bin;
	printf(" enter the binary no -> ");
	scanf("%d",&bin);
	int decimalNumber = 0, i = 0, remainder;
    while (bin!=0)
    {
        remainder = bin%10;
      	bin/= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    printf("%d",decimalNumber);
}

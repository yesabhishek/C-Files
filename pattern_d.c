#include<stdio.h>
int main()
{

int i,j;
char al[]={'a','b','c','d','e','f'};
for(i=0;i<5;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("%c",al[j]);
	}
	printf("\n");
}
}

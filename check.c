#include<stdio.h>
int main()
{
	int n;
	int i;
	int j=0;
	scanf("%d",&n);
	if(n%2==0)
	{
		j=0;
			for(i=0;i<n;i++)
		{
			
			printf("%d",j);
			j+=2;
		}
	}
	else
	j=1;
	for(i =0;i<n;i++)
	{
		printf("%d",j);
		j+=1;
	}
}

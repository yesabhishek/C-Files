#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,num,blanks,n;
	printf("Enter n value : ");
	scanf("%d",&n);
	for(i=1,k=1;i<=n;i++)
	{for(blanks=n-1;blanks>=k;blanks--)
		printf(" ");
	for(j=1,num=1;j<=k;j++)
	{	printf("%d ",num);
		if(j>=((k+1)/2))   num--;
		else	num++;
	}printf("\n");
	if(i>=((n+1)/2))
		k-=2;
	else
		k+=2;
	}
}


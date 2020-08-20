#include<stdio.h>

int main()
{
	int a[20],i,j,n,t=0;


	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=2;i<=n;i++)
	{
		j=i-1;
		while((j>=1)&&(a[j]>a[j+1]))
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			j=j-1;
		}
	}

	for(i=1;i<=n;i++)
printf("%d",a[i]);

}

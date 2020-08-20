#include<stdio.h>
int manchester(int *arr)
{
	
	int j=0;
/*	for( j=0;j<5-1;j++)
	{
		if(arr[j]==arr[j+1])
		{
			arr[j]=0;
		}
		else
		arr[j]=1;
	}
	*/
	
	for(int i=1;i<len;i++)
	{
		a[i]=a[i]^a[i-1];
	}
	return *arr;
}
int main()
{
	int arr[5];
	int i=0;int j=0;
	for( i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	manchester(arr);
	for(j=0;j<5;j++)
	{
		printf("%d",arr[j]);
	}
}

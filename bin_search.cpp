#include<stdio.h>
int manchester(int *arr)
{
	
	for(int i=0;i<5-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			arr[i]=0;
		}
		else
		arr[i]=1;
	}
	
	return *arr;
}
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	manchester(arr);
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}

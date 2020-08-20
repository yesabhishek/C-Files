#include<stdio.h>
int reverse(int arr[])
{
	int n=sizeof(arr);
	int i=0;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[n];
		n--;
		
	}
	return arr;
}

int main()
{
	int i;
	int arr[]={1,3,2,5,4};
	reverse(arr);
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}

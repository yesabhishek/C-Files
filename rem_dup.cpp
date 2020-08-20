#include<stdio.h>
int main()
{
int i=0;
int arr[10];
 
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)	
 scanf("%d",&arr[i]);
	int temp;
for(int i=0;i<n;i++)
{
	for(int j=0;j<i;j++)
	{
		if(arr[j]>arr[j]+1)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[i]=temp;
		}
	}
 } 
 
 
 for(int i=0;i<n;i++)
 {
 	printf("%d",arr[i]);
 }
 
}

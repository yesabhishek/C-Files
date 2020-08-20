#include<stdio.h>
int main()
{
	int arr[5];
	int ele,i,count=0,minrep,min,k,l;
	for( i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" enter the element to be searched ");
	scanf("%d",&ele);
	for( i=0;i<5;i++)
	{
		
		if(arr[i]==ele)
		{
			count++;
			printf(" found the element at %d ",i);
			l=arr[i];
			
			if(count>minrep)
			{
				k=arr[i];
			}
			else
			{
				min=l;
			}
		}
		
	}
		printf(" \n no of max repetitipns %d and no is %d",count,k);
		printf(" \n no of min repetitipns %d and no is %d",min);
		
	
}

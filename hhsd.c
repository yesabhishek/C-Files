#include<stdio.h>
int main(void)
{
	int i,j=0;
	int arr[100],size,ele;
	printf(" enter the size of the array => ");
	scanf("%d",&size);
	printf(" \n enter the elements as follows :- \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" enter the element to be searched =>");
	scanf("%d",&ele);
	int high=size-1,low=0,mid=high+low/2;
	for(i=0;i<mid;i++)
	{
		if(ele==arr[i])
		{
			int x=i-1;
				printf(" ele is found at a[%d] ",i);
		}
	}
	for(j=mid;j<size;j++)
	{
		if(ele==arr[j])
		{
			int y=j-1;
				printf(" ele is found at a[%d] ",j);
		}
	}

}

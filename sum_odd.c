#include<stdio.h>
	int sum=0;
int calculateMatrixSum( int m[][2])
{

	int i,j;
	
	for(i =0; i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(m[i][j]%2==0)
			{
				sum=sum+m[i][j];
				
			}
		}
	}
		
	return sum;
			
}
int main()
{
	int i,j,l=0;
	
	int matrix[2][2];
	for(i =0; i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix[i][j]);
			
		}
	}
	int arr[4];
	for(i =0; i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr[l++]=matrix[i][j];
			
		}
	}	
(int**) arr;
	int s=calculateMatrixSum(arr);
	printf("%d",s);
}

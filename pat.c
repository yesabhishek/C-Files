#include<stdio.h>
int main()
{
	int row=4,col=3;
	for(row=1;row<=4;row++)
	{
		for(col=1;col<=row;col++)
		{
				printf("%d",row);
		}
	
		printf("\n");
	}
}

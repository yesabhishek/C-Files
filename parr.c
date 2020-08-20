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
	
	
	row=4;
		for(row=4;row>=1;row--)
	{
	
		for(col=4;col>row;col--)
		{
			printf("%d",row);
		}
		printf("\n");
	}
}

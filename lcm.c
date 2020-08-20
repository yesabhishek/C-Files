#include<stdio.h>
int lcm(int *arr,int len)
{
	int i;
	int a=0;
	int temp=0;
	for(i=0;i<len-1;i++)
	{
		a=findlcm(arr[i],arr[i+1]);
		temp=a;
		
	}
	return findlcm((a,temp));

}

int findlcm(int a,int b)
{
	
	int lcm = (a > b) ? a : b;

		while(1)
		{
		if( lcm % a == 0 && lcm % b == 0 )
		{
			return lcm;
		break;
		}
		++lcm;
	}
	
}

int main()
{
	int arr[]={11,3,5,7};
	
	//int ans=findlcm(2,4);
	int ans=lcm(arr,4);
	printf("%d",ans);
}



#include<stdio.h>
#include<math.h>
int bintodec(int n)
{
	int i,j=0;
	int temp=n;
	int count=0;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	for(i=0;i<count;i++)
	{
		int div=n%10;
		j+=div*pow(2,i);
		n=n/10;
	}
	return j;
}
int main()
{
	int num=1011;
	int ans=bintodec(num);
	printf("%d",ans);
}

#include<stdio.h>
int n1,n2,ans;
int gcd(int n1,int n2)
{
	if(n1%n2==0)
	return n2;
	else
	
	return (gcd(n2,n1%n2));
//	return (ans);
	
}
int main(void)
{
	printf(" enter the two nos");
	scanf("%d %d",&n1,&n2);
	ans=gcd(n1,n2);
	printf("%d",ans);
}

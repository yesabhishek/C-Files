#include<stdio.h>
int ans;
int fact(int n)
{
	
	if(n==0)
	return 1;
			
	else
	
	return ( n * fact(n-1));
	

}
int main (void)
{
	int n;
	printf(" enter the no you want the factorial => ");
	scanf("%d",&n);
	ans=fact(n);
	printf("%d",ans);
}


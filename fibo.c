#include<stdio.h>

int fibonacci(int n)
 {
 int ans;

 if (n == 1 || n == 2)
 ans = 1;
 else
 ans = fibonacci(n - 2) + fibonacci(n - 1);
printf(" %d ",ans);
 return (ans);
}
int main(void)
{
	fibonacci(4);
//	printf("%d",ans);
}

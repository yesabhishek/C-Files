#include<stdio.h>

int fun(int x)
{

if(x>0)
	  {
	  fun(x/2);
	  fun(x/2);
	  }
	  printf("%d",x);
	  return 0;
}
int main()
{
	fun(4);
}

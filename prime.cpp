#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    int count=0;

   // printf("Enter a positive integer: ");
   // scanf("%d", &n);
    int x=10;
    int y=20;
    int j;
for(j=x;j<=y;j++)
{

    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(j%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (j == 1) 
    {
    
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
          count++;
       /* else
          printf("%d is not a prime number.", n)*/
    }
    
    return 0;
}
}

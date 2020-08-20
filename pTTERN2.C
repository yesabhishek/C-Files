#include<stdio.h>
int main()
{
	int i,j;
 for(i=1; i<=5; i++)
    {
        /* Print spaces in decreasing order of row */
        for(j=i; j<5; j++)
        {
            printf(" ");
        }

        /* Print star in increasing order or row */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
	}


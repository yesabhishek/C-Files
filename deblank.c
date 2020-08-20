#include<stdio.h>
#include<string.h>

	char sr[10];
	int main(void)
	{
		printf(" enter the string: ");
		gets(sr);
		int len=strlen(sr);
		int i=0;
		for(i=0;sr[i]<len;i++)
		{
			if(sr[i]==' ')
			{
				sr[i]=sr[i+1];
			}
				puts(sr);
		}
	
	}


#include<stdio.h>
#include<string.h>
int main(void)
{

	char a[10],b[10];
	int i=0;
	
	printf(" enter the strings : ");
	gets(a);
//	strcpy(b,a);
	strncpy(b,a,6);
	strcat(b," \t hii");
	strtok(b,",");
	strtok(NULL,",");
	puts(b);
	
	
	
	
}

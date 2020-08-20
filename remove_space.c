#include<stdio.h>
#include<string.h>
int i=0,len;
char *p;
void recursion(char word[10],char *p);
int main(void)
{

	char word[10];
	printf(" enter the string with space => ");
	gets(word);
		p=&word;
 //len=strlen(word);
puts(p);
//printf("%d",len);
	recursion(word,*p);
	
	
	
}

void recursion(char word[10],char *p)
{
		puts(p);
		
		if(p!=' ')
		{
		puts(p);
		}
						
	else
	recursion(word,*p+1);

}

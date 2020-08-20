#include<stdio.h> 
#include<string.h>
int main(void)
{
int i,j=0;
char str[20];
printf("Enter a String:\n");
gets(str);							// getting the string value

for(i=0;str[i]!='\0';++i)			// for i=0, str[i] not equal to null , ++i
{
if(str[i]!=' ')
str[j++]=str[i];
}
    
str[j]='\0';
printf("String After Removing Spaces:\n %s \n",str);
    
}

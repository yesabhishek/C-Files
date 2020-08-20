#include<stdio.h>
int checkBirthday(char *month,int day)
{
	int i=0;
	if((day==5)&&(strcmp(month,"july")))
	{
		return 1;			
	}
	else
	return 0;
	}



int main()
{
	char month;
	scanf("%s",&month);
	int day;
	scanf("%d",&day);
	int x=checkBirthday(month,day);
	printf("%d",x);
	
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
char name[10];
int rgd_no;
double cgpa;
char course[10];
} student;

int main(void)
{
student s[10];
int i,j;
for(i=0;i<2;i++)
{

printf(" enter the name of the student => \n");
//gets(s[i].name);
scanf("%s",s[i].name);

printf(" enter the regd no of the student \n ");
scanf(" %d",&s[i].rgd_no);

}
i=0;
if(strcmp(s[i].name,s[i+1].name)==0)
{
	printf(" the name are same ");
}
}
/*
printf(" printing the details \n ");



for(i=0;i<4;i++)
{
printf("student name is %s  ",s[i].name);
//puts(s[i].name);
printf(" regd no is %d \n ",s[i].rgd_no);
}
}*/


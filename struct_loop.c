#include<stdio.h>
#include<string.h>

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
for(i=0;i<4;i++)
{

printf(" enter the name of the student =>");
//gets(s[i].name);
scanf("%s",s[i].name);

printf(" enter the regd no of the student ");
scanf(" %d",&s[i].rgd_no);

}
printf(" printing the details \n ");

for(i=0;i<4;i++)
{
printf("student name is %s \t  ",s[i].name);
//puts(s[i].name);
printf(" regd no is %d \n ",s[i].rgd_no);
}
}


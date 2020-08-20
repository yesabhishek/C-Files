#include<stdio.h>
int main(void)
{
 
char letter_1,letter_2,letter_3;
int age;

printf(" enter the name ");
scanf("%c",&letter_1);
scanf("%c",&letter_2);

printf(" enter the age");
scanf("%d",&age);

printf("hi %c%c - your age is %d\n", letter_1,letter_2,age);
return(0);
}


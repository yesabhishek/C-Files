#include<stdio.h>
struct node
{
	int volts;
	char current[3];
	node *next;
};

node *n1,*n2,*n3;
n1=(node*)malloc(sizeof(node));
strcpy(n1->current,"AC");
n1->volts=115;
n2(node*)malloc(size(node));
strcpy(n2->current,"DC");
n2->volts=225;
n3=n2;
int main(void)
{
}

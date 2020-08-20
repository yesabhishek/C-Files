#include<stdio.h>
typedef struct
{
	char current[10];
	int volts;

 }node;
 node *start=NULL;
 	node *next;
 int main(void)
 {
 	node *newnode;
	 node *last=NULL;
	 while(*node<3)
	 {
	 	newnode=(node*)malloc(sizeof(node));
	 	printf(" enter the current type =>");
	 	scanf("%s",newnode->current);
	 	printf(" enter the volts=>");
	 	scanf("%d",newnode->volts);
	 	newnode->next=NULL;
	 	
	 	if(start=NULL)
	 	{
	 		start=newnode;
	 		last=newnode;
	 		
		 }
		 else
		 {
		 	last->next=newnode;
		 	last=newnode;
		 	
		 }
	  } 
 }

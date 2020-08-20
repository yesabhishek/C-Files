#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
	
}node;
	 node *head=NULL;
void create(int n);
void display(void);
int main(void)
{

	int n=0;
	printf("how many elements : ");
	scanf("%d",&n);
	int i=0;
	for(i-0;i<n;i++)
	{
	create(n);
}
	printf("yaha atak gaya");
	display();
	return 0;
}

void create(int n)
{
	node *temp=NULL;
		temp=(node*)malloc(sizeof(node));
		printf(" enter the node elements :");
		scanf("%d",&temp->data);
	//	temp->next=NULL;
		//head=temp;
		//temp->next=NULL;
	printf("inside")
;	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
		}
		
	}
//	return head;


void display()
{
	node  *p;
	if(head==NULL)
	{
		printf(" emopty");
		
	}
	else
	{
		p=head;
		while(p!=NULL)
		{
			printf("     %d -> ",p->data);
			p=p->next;
		}
	}
}

//note: STACK IS LIFO ORDER!
#include<Alloc.h>
#include<Stdio.h>
#include<Conio.h>
struct node {
	int data;
	struct node *next; }*top;
void push(struct node ** top)
{
struct node *temp;
int n,cnt;
cnt = 0;
printf("\n How many elements to push?");
scanf("%d", &n);
do
{
temp = (struct node *)malloc (sizeof(struct node));
printf("Enter data %d:",cnt+1);
scanf("%d", &temp->data);
temp->next = *top;
*top = temp;
cnt++;
}while(cnt < n);
if (cnt > n)
printf("Stack Overflow !");
getch();
}
void pop(struct node **top)
{
struct node *temp;
int n,x;
printf("\n Popping from stack!");
if(*top==NULL) printf("Under Flow ! (Stack is empty)");
while(*top != NULL)
{ temp = (struct node *)malloc(sizeof(struct node));
temp = *top;
x =temp->data;
printf("%d,",x);
*top = (*top)->next;
}free(temp); }

void display(struct node * top)
{
	while(top != NULL)
	{
	printf("%d,",top->data);
	top = top->next;
	}
}
void main()
{
struct node *top = NULL;
int ch;
char ans = 'y';
clrscr();
printf("\n *******************MENU*******************");
printf("\n  1. Push  \n  2. Pop  \n  3. Display  \n  4. Exit");
while(ans == 'y')
{
printf("\n Enter choice:");
scanf("%d", &ch);
switch(ch)
{
case 1: { push(&top); break;  }
case 2: { pop(&top); break;  }
case 3: { printf("\n Display stack !");
	 display(top); break; }
case 4: {printf("\n Exiting ....");
	 ans = 'n';exit(0);}
   }  /* End of switch */
   printf("\n CONTINUE?(y/n)");
 ans=getch(); } /* End of while */
    }/* end of main */



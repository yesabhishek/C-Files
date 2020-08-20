//NOTE: QUEUE HAS FIFO ORDER
#include <Stdio.h>
#include <Conio.h>
#include <Alloc.h>
struct Q {char no; struct Q *next;}*front,*rear;
void add() { struct Q *temp; char ch;
printf("\n Enter a new character:");
ch=(char)getche();
temp = malloc(sizeof(struct Q));
temp->no = ch;
temp->next = NULL;
if (front == NULL)
front = temp;
else
rear ->next = temp;
rear = temp;
printf("\n Inserted!");
}
void del()
{
struct Q *temp;
if (front == NULL)
printf("\n Queue is empty !");
else
   {
temp = front;
printf("%c is deleted", temp->no);
front = temp->next;
free(temp);
if(front == NULL) rear = NULL;
  }
}
void display()
{
struct Q *p;
if(rear == NULL) printf("Queue is empty !");
else
{
printf("\n The queue contains:");
for (p = front; p!= NULL; p=p->next)
printf("%c,",p->no);
printf("(END).\n\n");
}
}
void main()
{ int ch;  char ans='y';
rear = front = NULL;
clrscr(); printf("\n 1. Add \n 2. Delete \n 3. Display  \n 4. Exit ");
while((ans=='y')||(ans=='Y')) {
printf("\n Enter  choice:");
scanf("%d",&ch);
switch(ch) {
case 1:  {add(); break;}
case 2: { del(); break;}
case 3: { display(); break;}
case 4: {ans ='n'; exit(0); }}
printf("\n CONTINUE?(y/n)");
ans = getch(); } }

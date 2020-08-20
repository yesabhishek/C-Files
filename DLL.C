#include <Alloc.h>
#include <Stdio.h>
#include <Conio.h>
struct node
{ int data; struct node *prev,*next; }
main() { int ch;char car='A',ans;
struct node *head =NULL;
clrscr();
printf("******Menu******");printf("\n 0. Exit");
printf("\n 1. Append the list");
printf("\n 2. Insert a node to the list");
printf("\n 3. Delete a node from the list");
printf("\n 4. Search a node from the list");
printf("\n 5. Display the list");
printf("\n 6. Sort the list");
printf("\n 7. Reverse the list");
do {
printf("\n Enter Choice:"); ch = menu();
switch(ch)
{
case 0: exit(0);
case 1: append(&head);break;
case 2: insert(&head);break;
case 3: del(&head);break;
case 4: ser(&head);break;
case 5: display(head);break;
case 6: printf("\n Ascending - A \t Descending - D: "); car = getche();getch();
	sort(&head,car);
	break;
case 7: rev(&head);break;
 }printf("\n Continue?(y/n):"); ans=getche();
}while(ans=='y'||ans=='Y');}
int menu(){ int ch;
scanf("%d", &ch); return ch; }

display(struct node *head) { int i=0;
while(head!=NULL) { printf("\n node %d= %u \t prev node= %u <- Data= %d -> next node= %u",i+1,head,head->prev,head->data,head->next);
head=head->next; i++;} }

insert(struct node **head) {
struct node *temp = *head;
struct node *temp1;
int i,pos,no;
printf("Enter a number to be inserted:");
scanf("%d", &no); flushall();
printf("Enter position:");
scanf("%d", &pos);
if(temp == NULL||pos<=0) { printf("Error ! Invalid position"); return;  }
for (i = 0; i<(pos-2)&& temp!=NULL; i++)
temp = temp->next;
if(pos != 1) {
temp1 =(struct node *) malloc (sizeof(struct node));
temp1->data =no;
temp1->next = temp->next;
temp->next = temp1;
temp1->prev =temp->next;
temp1->next->prev =temp1;  }
else if(pos == 1) {
temp1 =(struct node *) malloc (sizeof(struct node));
temp1->data = no;
temp1->next = temp;
temp->prev = temp1;
temp1->prev = NULL;
*head = temp1;  }
}
append(struct node **head)
{
int no;
struct node *temp = *head; flushall();
printf("Enter number to be appended::"); scanf("%d", &no);
if(temp == NULL) {
temp = (struct node *) malloc (sizeof(struct node));
temp->data = no;
temp->next = temp->prev = NULL;
*head =temp;  }
else { while(temp->next != NULL) temp = temp->next;
temp->next = (struct node *) malloc (sizeof(struct node));
(temp->next)->prev =temp;
temp = temp->next;
temp->data = no;
temp->next = NULL; }
   }
del(struct node **head)
{
struct node *temp = *head;
int no;
if(temp == NULL) { printf("Error ! Invalid position"); return;  }
printf("Enter number to be deleted:");
scanf("%d", &no);
while((temp->data != no)&&(temp != NULL)) temp = temp->next;
if (temp != NULL) {
 if(temp == *head)  {
    temp->next->prev = NULL;
    *head = temp->next;  }  else  {  if(temp != *head)  {
  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;  }  free(temp); }
  if(temp == NULL)  printf("The number is not found !");  }
}

  ser(struct node **head)
  {
  struct node *temp;
  int no;
  temp = *head;
  if(temp == NULL) { printf("Error ! Invalid position"); return;  }
  printf("\n Enter the element to be searched:");
  scanf("%d", &no);
  while((temp->next !=NULL)&&(temp->data!=no))
  temp = temp->next;
  if(temp->data ==no)
  printf("Element exist in the list");
  else
  printf("Element doesnot exist in the list");
  }

  rev(struct node **head){
  struct node *back,*temp,*forward;
  temp = *head; back=NULL;forward = temp->next; temp->next=NULL;
   while(forward!=NULL) {
   back = temp;temp= forward; forward=temp->next;
   temp->next = back;
    }
   *head = temp;
  }

  sort(struct node **head,char a)
  {  struct node *temp1,*temp2;
  int no;
  temp1 = *head;
  if((a == 'A')||(a == 'a'))
  {
  while(temp1 != NULL)  {  temp2 = temp1;
  while(temp2 !=NULL) {
  if (temp1->data > temp2->data)
  {no = temp1->data;  temp1->data = temp2->data; temp2->data = no;  }
  temp2 = temp2->next;} temp1=temp1->next;
  }
 }
  else if((a == 'D')||(a == 'd'))
 { while(temp1 != NULL) { temp2 =temp1;
 while(temp2 !=NULL) { if(temp1->data<temp2->data) { no = temp1->data;
  temp1->data = temp2->data; temp2->data = no;  }
 temp2 = temp2->next; } temp1 = temp1->next; }
   }
     }


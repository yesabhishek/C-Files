#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node {
int data;
struct node *next;}  /*next returns a pointer to the next node structure*/
main() {
struct node *head = NULL;
struct node *head1 =NULL; /* the pointer 'head' is initially set to NULL */
int ch,x;
char ans='y',cont='y',reply;
clrscr();printf("\n 1.APPEND \n 2.INSERT \n 3.DISPLAY \n 4.ERASE \n 5.REVERSE \n 6.CONCAT \n 7. SEARCH \n 8. DELETE \n 9.CIRCULAR LL \n 0.EXIT");
while(ans=='y'|| ans=='Y') {
printf("\n ENTER CHOICE::"); scanf("%d", &ch);
switch(ch) {
case 1: append(&head); break;
case 2: insert(&head);break;
case 3: display(head);break;
case 4: Erase(&head);break;
case 5: Revlist(&head);break;
case 6: printf("\n Do you want to add elements to List2(y/n)?");
reply = getche(); if(reply=='y'||reply=='Y'){
printf("\n Enter Elements for List2 \n");
while(cont=='y'||cont=='Y')
{append1(&head);printf("\n CONTINUE ADDING ELEMENTS?(y/n):");
cont = getche(); printf("\n");} }
printf("\n");Concatenation(&head,&head1);break;
case 7: ser(&head);break;
case 8: del(&head);break;
case 9: create(&head);break;
case 0: exit(0); }
printf("\n CONTINUE(y/n):");ans= getche(); } }

del(struct node **head)
{
struct node *q,*temp = *head;
int no;
if(temp == NULL) printf("\n Error: Invalid position!");
printf("Enter number to be deleted:"); scanf("%d", &no);
if((temp==*head) && (temp->data== no))  { *head=temp->next;
   free(temp);  }
while((temp->next->data != no)&&(temp!= NULL)) temp = temp->next;
if (temp != NULL)
{ if(temp->next->data == no)
 { q=temp->next; temp->next=q->next;free(q);return;}
 if(temp != *head) { q=temp->next; temp->next=q->next; }
     free(q); }
 }
create(struct node **clist) {
struct node *newnode,*temp;
if(*clist==NULL) {
newnode = (struct node *)malloc(sizeof(struct node));
newnode->data=10; *clist = newnode;
newnode->next = *clist; printf("\n %d->%d...",newnode->data,(newnode->next)->data);
}
else {
printf("\n Lets add a node with data 10 in the CList! \n");
newnode = (struct node *)malloc(sizeof(struct node)); newnode->data=10;
temp =*clist;
while(temp!=NULL) {  printf("%d->",temp->data);temp = temp->next; }
temp->next = newnode; //temp->next = *clist;
printf("%d->",(temp->next)->data);
newnode->next = *clist;
printf("%d",(newnode->next)->data);
printf("....continue");
 }
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

insert(struct node **head){  // we allocate memory space for each node
struct node *temp = *head;    /*   	   |  |  | temp1  */
struct node *temp1;          /*                ^ |         */
int no,pos,i;              /*   temp |  |  |--- v| | |    */
printf("Enter number to be inserted:"); scanf("%d",&no);
printf("Enter position to be inserted:"); scanf("%d",&pos);
if(temp == NULL||pos<=0) { printf("Error ! invalid position"); return;  }
for (i = 0;i<pos-2 && temp != NULL; i++) temp = temp->next;
temp1 = (struct node*) malloc (sizeof(struct node)); temp1->data = no;
if(pos!=1) { temp1->next = temp ->next; temp->next =temp1; }
else if(pos ==1) { temp1->next = temp; *head = temp1; } /* head-->| | |-->| | |(temp) */
}

display(struct node *head)
{ //we need the address of the first node to traverse the list.
clrscr();  // we traverse the list from first node to the last node
while(head != NULL)
{ printf("%3d",head->data);
head =head->next;
}
getch();
}

append(struct node **head) { int no; struct node *temp = *head;
printf("Enter number to be appended:");scanf("%d",&no);
if(temp == NULL)
{ temp = (struct node *)malloc(sizeof(struct node));
temp->data = no; temp->next = NULL; // for all nodes next has to be NULL
*head = temp; } else { while(temp->next !=NULL) temp = temp->next;
temp->next = (struct node *)malloc(sizeof(struct node));
temp = temp->next; temp->data =no; temp->next = NULL ;
} /* close of else */ } /* Close of append */

append1(struct node **head) {
int no; struct node *temp = *head;
printf("Enter number:");scanf("%d",&no);
if(temp == NULL)
{ temp = (struct node *)malloc(sizeof(struct node));
temp->data = no; temp->next = NULL; // for all nodes next has to be NULL
*head = temp; } else { while(temp->next !=NULL) temp = temp->next;
temp->next = (struct node *)malloc(sizeof(struct node));
temp = temp->next; temp->data =no; temp->next = NULL ;
} /* close of else */
  /* Close of append1 */ }

Erase(struct node **head) { struct node * temp = *head;
 while(*head)
 { temp = *head; *head = temp->next;//*head->next to temp->next
  free(temp);
  } *head=temp->next;
  }

  Revlist(struct node **head) {
   /* Reverse a L.L. reverses all the links of the list ,such that the first
    node goes to the end and the last node goes to the first */
   struct node *temp;struct node *forward;
   struct node *back;
   temp = *head; back=NULL;forward = temp->next; temp->next=NULL;
   while(forward!=NULL) {
   back = temp;temp= forward; forward=temp->next;
   temp->next = back;
    }
   *head = temp;  /*links the node back to the current node that is temp */
   }


 Concatenation(struct node **head,struct node **head2)
 {  /* returns a pointer to the first list and the second
     list appended at the end of the first list  */
 struct node *temp,*first;
   if(*head==NULL) temp = *head2;
  else {
  temp = *head;
  if(head2 != NULL) { temp = *head;
  while(temp!=NULL) { printf("%d->",temp->data); temp = temp->next;}
  temp->next = *head2; //links second list at the end
  first = temp->next;
  while(first!=NULL)  { printf("%d->",first->data); first = first->next;}
  } else {temp = *head;
  while(temp!=NULL) { printf("%d->",temp->data); temp = temp->next;}
    }
    }
      }




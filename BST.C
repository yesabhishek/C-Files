#include <alloc.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
struct stack{ int top;
int ele[10];}s;
struct bt {struct bt *left,*right;
int data; }*root;
typedef struct bt *treeptr;
int stackempty(struct stack *);
void create(struct stack *);
void push(struct stack *,int);
void pop(struct stack *);
void BTsearch(struct bt *,int);
void preord(struct bt *);
void search(struct bt *,int);
void main() { static struct bt *root = NULL; treeptr temp,ptr; int x;
clrscr();
printf("\n BINARY TREE CREATION:"); temp = (unsigned int)BTcreate(root);
create(&s); preord(temp);
printf("\n Enter number to search for:");scanf("%d",&x);fflush(stdin);
printf("\n Search:"); printf(" Recursively:"); search(temp,x);
printf("\n Non-Recursively:"); BTsearch(temp,x);
getch();
}/* END OF MAIN*/
void create(struct stack *p){ p->top=0;}
void push(struct stack *p,int x) {p->top=(p->top)+1;p->ele[p->top] = x;}
void pop(struct stack *p) { printf("\t %d",(p->ele[p->top])); p->top= (p->top)-1; }
int stackempty(struct stack *p) { if(p->top == 0) return(1); else return(0);
 }

BTcreate(treeptr root)
{ treeptr temp, newnode;
char ans = 'y';
while(ans=='y'||ans=='Y')
{ newnode = (struct bt*)malloc(sizeof(struct bt));
printf("\n Enter elements to be inserted:");
scanf("%d",&newnode->data);//temp->data etc also works here
fflush(stdin);
newnode->left = newnode->right =NULL;
if(root!= NULL)
{
temp = root;
while(temp!=NULL)
{
if(temp->left == NULL)
{
temp->left = newnode; break;
}
else temp = temp->left;
}
}  //end of if
else root = newnode;
printf("\n Any more numbers?(y/n):");
ans = getche(); }
return(root);
}  //end of function

void BTsearch(treeptr temp, int x)
{
while(temp->data!=x) {
if(x < temp->data) temp = temp->left;
else if(x > temp->data) temp = temp->right;
if(temp==NULL) break; }
if(temp==NULL) printf("NULL!");
else printf("%d",temp->data); } //end of non-recursive search

void search(treeptr temp, int x)
{
if(temp==NULL) printf("NULL!");
else if(temp->data == x) printf("\n Number %d Exists!",temp->data);
else if(x<temp->data) search(temp->left,x);
else search(temp->right,x);
 } /* end of recursive search */

//Non-recursive tree traversals:
void preord(treeptr temp)
{
do{
while(temp!=NULL) {
push(&s,temp->data);
temp=temp->left; } pop(&s);
 temp=temp->right;} while(stackempty(&s)==0);
}


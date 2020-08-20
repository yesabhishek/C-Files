#include<stdio.h>
//#include<conio.h>
#define size 50
int n;
void main()
{
  int a[size],key,i,flag;
  int binsearch(int a[size],int key);
 // clrscr();
  printf("How many elements\n");
  scanf("%d",&n);
  printf("enter elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the element which is to be search\n");
  scanf("%d",&key);
  flag=binsearch(a,key);
  if(flag==0)
  {
    printf("the element is not present\n");
  }
  else
    printf("the element is at a[%d] location\n",flag);
  ////getch();
}
int binsearch(int a[size],int key)
{
  int low,high,mid;
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
    return mid;
    else if(key<a[mid])
    high=mid-1;
    else
     low=mid+1;
  }
  return 0;
}

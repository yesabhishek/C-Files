/*
Author Name:N.L.Sowjanya
Program Title:Merge sort
Purpose:To implement the merge sort
Date of creation:05-01-2005
Date of Modification:05-01-2005
Errors found:
Suggestions:
*/

#include<stdio.h>
#include<conio.h>

void merge(int data[],int p,int q,int r);
void mergesort(int data[],int p,int r);

void main()
 {
  int data[10],i;
  printf("enter the input values for sorting");
  for (i=0;i<10;i++)
    scanf("%d",&data[i]);
  mergesort(data,0,9);
  printf("sorted data \n");
  for (i=0;i<10;i++)
    printf("\n data[%d]=%d",i+1,data[i]);
  getch();
 }

void mergesort(int data[10],int p,int r)
 {
  int q;
  if (p<r)
   {
    q=((p+r)/2);
    mergesort(data,p,q);
    mergesort(data,q+1,r);
    merge(data,p,q,r);
   }
 }

void merge(int data[10],int p,int q,int r)
 {
  int low,k,high,j,B[10];
  low=p;high=q+1;k=p;
  while(low<=q&&high<=r)
   {
    if(data[low]<=data[high])
     {
      B[k]=data[low];
      low++;
     }
    else
   {
      B[k]=data[high];
      high++;
   }
   k++;
  }
   if (low>q)
   for(j=high;j<=r;j++)
     {
       B[k]=data[j];
       k++;
     }

   else
   for(j=low;j<=q;j++)
    {
      B[k]=data[j];
      k++;
    }
   for (j=p;j<=r;j++)
     data[j]=B[j];
 }


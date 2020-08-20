//wap togenerate frequence distribution
#include<stdio.h>
void main()
{
 int count[]={0,0,0,0,0,0,0,0,0,0};
 int i,j;
 int arr[10];
 printf("enter ten values");
 for (i=0;i<10;i++)
 {
   scanf("%d",&arr[i]);
     j=arr[i]/10;
   if(j<10)
      count[j]++;
   else
    count[10]++;
 }
  printf("range\t frequence");
  for(i=0;i<10;i++)
  printf("\n%d-%d\t %d",i*10,i*10+9,count[i]);
}


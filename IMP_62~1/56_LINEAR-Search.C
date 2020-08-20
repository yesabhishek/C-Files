#include<stdio.h>
#include<conio.h>
main()
{
  int a[16],key,i,s=0;
  clrscr();
  printf("Enter the element to be found");
  scanf("%d",&key);
  for(i=0;i<15;i++)
  {
    if(i==key)
    {s=1;break; }
  }
  if(s==1)
  printf("key found at %d location");
  else
  printf("sorry key not found");

}
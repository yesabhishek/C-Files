/*wap to find out given string is palindrom or not*/
#include<stdio.h>
void main()
 {
  char str[25];
  int i=0,j=0,k,flag=1,arr[25];
  printf("enter any string");
  scanf("%s",str);
  while(str[i]!='\0')
  {
     i++;
  }
  i--;
  k=i;
  while(j<(i/2))
  {
   if(str[j]!=str[k])
	flag=0;
	j++;
	k--;

  }
     if(flag)
    printf(" string is palindrom");
  else
    printf(" string is not palindrom");

}

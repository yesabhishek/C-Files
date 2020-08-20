/*wap to read the string and print the length*/
#include<stdio.h>
void main()
 {
  char str[25];int count=0;
  int i=0;
  printf("enter any string");
//  for(i=0;i<25;i++)
  scanf("%s",str);
  while(str[i]!='\0')
  {
    printf("%c",str[i]);
    i++;
    count++;
  }
  printf("length of string=%d",count);
}
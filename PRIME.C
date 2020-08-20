#include<stdio.h>
main() {
int lt,i=1,n=2,c,hl;
printf("\n\t\t Enter Limit:");
scanf("%d",&lt);
printf(" enter the higher limit ");
scanf("%d",&hl);
for(int i=lt;lt<hl;i++)
{

while(i<=lt) {
c=2; 
while(c<=(n/2)) 
{ 
if((n%c)==0) 
break; 
else 
c++;
}
if(c>(n/2)) 
{
printf("\t %d",n); 
n++;i++;
} 
else
 n++;
  }
}
}


#include<stdio.h>

void path(char a[4][4],int r,int c)
{
  if(r==3&&c==0)
  {
   printf("reached at (3 3)");
   return;
  }
  else if (a[r+1][c]!='x')
  {
   path(a,r+1,c) ;
  }
  else
  {
    path(a,r,c+1);
  }
}

main()
{
 char a[4][4]={{'o','o','o','x'},
 	       {'o','x','o','o'},
 	       {'o','o','o','x'},
 	       {'o','o','o','o'}};
 path(a,0,0);
}


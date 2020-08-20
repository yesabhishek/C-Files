#include<stdio.h>
 main()
 {
  int a[10][10],b[10][10],c[10][10],i,j,m,n,ip,k,p,q;
  clrscr();
  printf("input row n column of matrix A: ");
  scanf("%d %d", &m,&n);
  printf("input row and column of B matrix: ");
  scanf("%d %d",&k,&q);
  if(n==k)
   {
    printf("matrices can be multiplied\n");
    printf("resultant matrix is %d X %d\n",m,q);
    printf("input A-matrix\n");
    read_mat(a,m,n);
    printf("input B-matrix\n");
    read_mat(b,k,q);
    for(i=0;i<m;++i)
     for(j=0;j<q;++j)
	 {
	      c[i][j]=0;
	      for(ip=0;ip<n;++ip)
	      c[i][j]=c[i][j] + a[i][ip] * b[ip][j];
	  }
      printf("resultant of A and B matrices :\n");
      write_mat(c,m,q);
      }
      else
       {
	printf("col of matrix a must be equal to row of matrix B\n");
	printf("matrices cannot be multiplied :\n");
	}
      }
      read_mat(a,m,n)
       int a[10][10],m,n;
	 {
	  int i,j;
	   for(i=0; i<m; i++)
	   for(j=0; j<n; j++)
	    scanf("%d",&a[i][j]);
	  }
	  write_mat(a,m,n)
	  int a[10][10],m,n;
	   {
	     int i,j;
	     for(i=0; i<m; i++)
	      {
		for(j=0; j<n; j++)
		 printf("%5d", a[i][j]);
		 printf("\n");
		 }
		 getch();
	       }















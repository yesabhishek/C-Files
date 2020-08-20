// Adding rows and columns of a square matrix
#include<stdio.h>
#include<conio.h>
main() { int i,j,m,n,s,a[10][10],sum[20], ans =1; 
do {
clrscr();
printf("\n Enter order of the square matrix:(Max 5)::"); scanf("%d", &m); n = m; s = 0;
printf("\n Enter the elements:"); 
for(i=0;i<=m-1;i++) for(j=0;j<=n-1;j++) scanf("%d", &a[i][j]);
for(i=0;i<=m-1;i++) { sum[j] = 0; for(j=0;j<=n-1;j++) {sum[i] = sum[i] + a[i][j]; } a[i][n] = sum[i]; }
for(j=0;j<=n-1;j++) { sum[i] = 0; for(i=0;i<=m-1;i++) { sum[j] = sum[j] +a[i][j]; s = s + a[i][j];} a[m][j] = sum[j]; }
a[m][n] = s;
for(i=0;i<=m;i++) { for(j=0;j<=n;j++) printf("\t %d",a[j][i]); printf("\n");}
printf("\n Do You Wish to Continue?(1/0)"); scanf("%d",&ans);
} while(ans ==1); getch();
}


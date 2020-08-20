#include<stdio.h>
#include<conio.h>
main() { int n;
void factor(int);
printf("\n Enter a number:");scanf("%d",&n); printf("\n Prime factors are:");factor(n); }
void factor(int n) { int d =2, m;
m = n/2; while(d<=n) { if(m%d==0) {printf("%d,",d); m=m/d;} else d++;
}
}
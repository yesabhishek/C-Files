#include<stdio.h>
#include<conio.h>
main() { int *x,s[100],n,i,j,t;
int *sort(int a[],int n);  clrscr();
printf("\n USING POINTERS \n Enter number of elements to be sorted:");
scanf("%d",&n); printf("\n Enter the elements to be sorted:");
for(i=0;i<n;i++){ printf("\n Element %d ::",i+1); scanf("%d",&s[i]);} 
printf("\n The elements in sorted order is as follows:");x = sort(s,n); for(i =0;i<n;i++) {printf("\n %d",*x); x++;}
printf("\n ASCENDING ORDER WITHOUT USING POINTERS:");
for(i=0;i<n-1;i++) { for(j=i+1;j<n;j++) if(s[i]>s[j]) {t = s[i]; s[i] = s[j]; s[j] = t;} }
for(i=0;i<n;i++) printf("\n %d",s[i]);
printf("\n ASCENDING ORDER ANOTHER WAY WITHOUT USING POINTERS:");
for(i=n;i<=0;i--) { for(j=i-1;j<n;j++) if(s[i]<s[j]) {t = s[i]; s[i] = s[j]; s[j] = t;} }
for(i=0;i<n;i++) printf("\n %d",s[i]);
}
int *sort(int a[],int n) { int i,j,temp; for(i=0;i<n-1;i++) for(j=i+1;j<n;j++) { if(a[i] > a[j]) {
temp = a[i]; a[i] = a[j]; a[j] = temp; } } return(a);
}

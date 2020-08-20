#include<stdio.h>
#include<conio.h>
main() { int x,i,j,n,temp,a[10];
clrscr();
printf("\n How many numbers(max 10):");scanf("%d",&n);
printf("\n Enter elements to be sorted according to odd or even: ");
for(i=0;i<n;i++) {printf("\n Enter element %d :",i+1); scanf("%d",&a[i]); }
for(i=0;i<n-1;i++) {
for(j=i+1;j<n;j++){  if(a[j] % 2 == 0) {temp = a[i];a[i] = a[j];a[j] = temp;} } }
printf("\n Sorted list according to odd or ever numbers is as follows:");
for(j=0;j<n;j++)  printf("\n Element %d: %d",i+1,a[j]);}
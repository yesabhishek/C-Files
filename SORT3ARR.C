/* Accept values for 2 arrays and sort them in the 3rd array. */
#include<stdio.h>
#include<conio.h>
main() { int x,i,j,n1,n2,temp,a[10],b[10],c[20];
clrscr();
printf("\n How many numbers for 1st Array(max 10):");scanf("%d",&n1);
printf("\n How many numbers for 2nd Array(max 10):");scanf("%d",&n2);
printf("\n Enter elements to for 1st Array: "); for(i=0;i<n1;i++) {printf("\n Enter element %d :",i+1); scanf("%d",&a[i]); c[i] = a[i]; }
printf("\n Enter elements to for 2nd Array: "); for(j=0;j<n2;j++) { printf("\n Enter element %d :",j+1); scanf("%d",&b[j]); i = i+1; c[i] = b[j]; }
printf("\n The sorted elements in the 3rd Array is as follows:");
for(i=0;i<(n1+n2)-1;i++) { for(j=i+1;j<(n1+n2);j++) { if(c[i]>c[j]) { temp = c[i]; c[i] = c[j];c[j]=temp;} } }
for(i=0;i<(n1+n2);i++) printf("\n Element %d: %d",i+1,c[i]);
}
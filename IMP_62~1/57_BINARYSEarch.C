 #include<stdio.h>
 #include<conio.h>
 main()
 {
 int low=0,high=7,mid,key,f=0;
 int a[7]={20,4,6,1,18,17,24};
 printf("enter teh element to be searched");
 scanf("%d",&key);
 while(low<high) && (f!=1))
 {
 mid=(low+high)/2;
 if(key<a[mid])
 high=mid-1;
// printf("element is found at %d location",mid);
  if(key>a[mid])
  low=mid+1;
 // printf("element is found at %d location",mid);
if(key==a[mid])
printf("element is found");
else
printf("element not found");
}




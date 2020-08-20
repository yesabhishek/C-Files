/* program: write a program of pattern1 */

#include<stdio.h>
#include<conio.h>

main()
{
   int cntr2=0,cntr=0,cntr1=0,number,temp=0;
   
   printf("Enter the Number:");
   scanf("%d",&number);
   printf("Show the Pattern");
   for(cntr=1;cntr<=number;cntr++)
   {
	for(cntr1=1;cntr1<=cntr;cntr1++)
	{
	       printf("%d",cntr1);
	}
	printf("\n");
   }
   printf("\nShow the Pattern2\n");
   for(cntr=1;cntr<=number;cntr++)
   {
	for(cntr1=1;cntr1<=cntr;cntr1++)
	{
	       printf("%d",cntr);
	}
	printf("\n");
   }
   printf("\nShow the Pattern3\n");

   for(cntr=1;cntr<=number;cntr++)
   {
	for(cntr2=cntr;cntr2<=number;cntr2++)
	{
		printf(" ");
	}
	for(cntr1=1;cntr1<=cntr;cntr1++)
	{
		  printf("%d ",cntr);
	}
	printf("\n");
   }

   printf("\nShow the Pattern4\n");

   for(cntr=1;cntr<=number;cntr++)
   {
	for(cntr2=cntr;cntr2<=number;cntr2++)
	{
		printf(" ");
	}
	temp=0;
	for(cntr1=1;cntr1<=cntr;cntr1++)
	{
		if(cntr1<((cntr+1)/2)+1)
			temp++;
		else if(cntr1==((cntr+1)/2)+1)
			temp++;
		else
		       temp--;
		printf("%d",temp);
	}
	printf("\n");
   }

 getch();
}

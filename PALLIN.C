/* Pallindrome */
#include<stdio.h>
#include<conio.h>
main()

{ 

int r=0,no,n,p;


printf("\n ENTER A NUMBER::");
scanf("%d",&no);n=no; 

do

 {

	p = no % 10; 
	r= r*10+p; 
	no = no/10;

} 

	while(no!=0);

		if(n==r) 

		printf("%d is a Pallindrome !",r); 
		
	else printf("%d is Not Pallindrome!",r);
getch();
}



























































































































































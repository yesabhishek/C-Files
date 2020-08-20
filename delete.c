#include<stdio.h>
int main(void)
{
	int n=0,s=0;
	int c,choice;
	printf("*********************************** WELCOME TO THE QUIZ *********************************** \n \n");
	printf(" \n  PRESS 1 TO ENTER THE QUIZ OR 2 TO EXIT \n");
	scanf("%d" ,&c);
	if(c==1)
	{
		printf(" \n A. Who is the CEO of Apple ? \n");
		printf(" \n 1. Jim Parsons \n 2. Harry Potter \n 3. Tim Cook \n 4. None of the above \n");
		scanf("%d",&choice);
		switch(choice)
		{
       case 1: printf(" \n Incorrect ");
       			n++;
               break;
       case 2: printf(" \n Incorrect ");
       		n++;
                break;
       case 3: printf(" \n Correct ");
       		s++;
               break;
       case 4: printf(" \n Incorrect ");
       		n++;
                break;  
       default : printf(" error !");
        }
        
        	
}
	if(c==0)
	{
		printf(" wrong input ! ");
		}	
		
		
		
		printf(" \n \n THE FINAL SCORE IS %d out of 4 \n \n  ",s);
		
		printf(" ********************************* THANK YOU FOR PLAYING  *********************************"); 
}

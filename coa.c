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
        
        	printf(" \n B. Where is Taj Mahal? \n");
		printf(" \n 1. Agra \n 2. Haryana  \n 3. Thailand \n 4. Nagaland \n ");
		scanf("%d",&choice);
		switch(choice)
		{
       case 1: printf(" \n Incorrect");
       			n++;
               break;
       case 2: printf(" \n Correct ");
       		s++;
                break;
       case 3: printf(" \n Incorrect ");
       		n++;
               break;
       case 4: printf(" \n Incorrect ");
       		n++;
                break;  
       default : printf(" \n error !");
        }
        
        
        	printf(" \n A. What is Facebook ? \n");
		printf(" \n 1. Social Network site \n 2. Shoping site  \n 3. Dating site  \n 4. None of the above \n");
		scanf("%d",&choice);
		switch(choice)
		{
       case 1: printf(" \n Correct");
       			s++;
               break;
       case 2: printf(" \n Incorrect ");
       		n++;
                break;
       case 3: printf(" \n Incorrect ");
       		n++;
               break;
       case 4: printf(" \n Incorrect ");
       		n++;
                break;  
       default : printf(" \n error !");
        }
        
        
        
        	printf(" \n A. Who is the current Prime Minister of India ? \n");
		printf(" \n 1. Jwaharlal Nehru \n 2. Lalu Yadav \n 3. Narendra Singh Modi \n 4. Manmohan Singh \n");
		scanf("%d",&choice);
		switch(choice)
		{
       case 1: printf(" \n Incorrect");
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

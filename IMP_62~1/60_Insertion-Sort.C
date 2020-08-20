/*Author Name: N.L.Sowjanya
  Program TitleINSERTIO SORT
  Purpose:To sort an array
  Date of creation: 05-01-2005
  Date of Modification:05-01-2005
  Errors found:
  Suggestions:
  */
  /*constants Declaration*/
  #define MAX 10
  /*Header Files*/
  #include<stdio.h>
  #include<conio.h>
  /*the function sorts the input in the specified manner*/
  void insertionsort(int input[]);
  main()
    {
      int data[MAX];              /*holds the data*/
      int i;                      /*used as index for accepting input*/
      clrscr();
      printf("enter the input values for sorting \n");
      for (i=0;i<MAX;i++)
	scanf("%d",&data[i]);
      insertionsort(data);
      printf("sorted data \n");
      for(i=0;i<MAX;i++)
	printf("data[%d]=%d \n",i+1,data[i]);
      getch();
    }

  void insertionsort(int input[MAX])
    {
      int i,j,key;
      for(j=1;j<MAX;j++)
	{
	  key=input[j];
	  i=j-1;
	  while(i>=0 && input[i]<key)
	    {
	     input[i+1]=input[i];
	     i--;
	    }
	  input[i+1]=key;
	}
   }
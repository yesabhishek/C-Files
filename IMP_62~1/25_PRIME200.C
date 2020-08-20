/* program . print prime numbers below 200 */

# include <stdio.h>


  int main()
{
	//variables
	int cntr,cntr1,temp,number=200,prime_flag=0;


	for(cntr=2;cntr<number;cntr++)
	{
		//for(cntr1=2;cntr1<(cntr/2);cntr1++)
		//{
			if(number%cntr==1)
			{
				prime_flag=1;
				break;
			}
		//}
		if(prime_flag==1)
			printf("%d-->",cntr);
	}

	
}

/*
* to calculate the acceleration and time required 
*/





	#include<stdio.h>   				/* printf,scanf definition*/
	int main(void)					 	/*reserved word*/
{

	double velocity,distance,acc,time; 	/* velocity in km/hr , distance in km , acc in m/s2 , time in secs*/

	printf(" enter the speed of the plane ");	/* printing the speed */
	scanf("%lf",&velocity);			       	/* standard identifier*/

	printf(" \n enter the distance ");
	scanf("%lf",&distance);

	velocity=(velocity*5)/18;				/* according to the formula calculating the asked values*/
	time=(2*distance)/velocity;
	acc=velocity/time;
 

	printf(" \n  the acceleration is %lf",acc);
	printf(" \n  the time required is %lf",time);
	return(0);
}


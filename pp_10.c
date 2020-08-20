/* To find the perpendicular bisector of the two point coodinates given by the user */



#include<stdio.h>				/* printf,scanf definition*/				 	

int main(void) 					/*reserved word*/
{
float x1,x2,y1,y2;				/* x1 ,y1 and x2 , y2  are X-Y point coordinate of a two given point by user */

printf(" enter the x-y cordinate of the first point ");
scanf("%f%f",&x1,&y1);

printf(" \n  enter the x-y cordinate of the second point ");
scanf("%f%f",&x2,&y2);



float mid_point_x=(x2+x1)/2;
float mid_point_y=(y2+y1)/2;
float slope=(y2-y1)/(x2-x1);			/* slope= (y2-y1)/x2-x1*/
float p_bisector=-1/slope;

printf(" \n  the perpendicular bisector of the two point coordinate is %f",p_bisector);

printf(" \n  the slope is %f",slope);

printf(" \n  the mid-point of two point coordinate is %0.1f  %0.1f",mid_point_x,mid_point_y);

return(0);
}

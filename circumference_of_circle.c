//program to find circumference of circle
#include<stdio.h>
# define pi 3.1416
main()
{
	float radius,circumference;
	printf("Enter radius of circle");
	scanf("%f",&radius);
	circumference=2*pi*radius;
	printf("The circumference of circle of radius %f is %f",radius,circumference);
}


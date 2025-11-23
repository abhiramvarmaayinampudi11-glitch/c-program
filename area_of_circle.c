//program to find area of circle
#include<stdio.h>
#define pi 3.141
main()
{
	float radius,area;
	printf("Enter radius of circle");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area of circle with radius %f is %f",radius,area);
}

//simple interest and compound interest
#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("Enter the principle amount");
	scanf("%f",&p);
	printf("Enter the time period");
	scanf("%f",&t);
	printf("Enter rate");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("The simple interest is %.2f\n",si);
	printf("the compound interest is %.2f",ci);
}

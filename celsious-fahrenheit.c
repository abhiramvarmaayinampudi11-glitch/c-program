//conversion of celsious temperature to fahrenheit
#include<stdio.h>
main()
{
	float ctemp,ftemp;
	printf("Enter the temperature in celsious");
	scanf("%f",&ctemp);
	ftemp=1.8*ctemp+32;
	printf("The temperature in fahrenheit is %f",ftemp);
}

//program to input length in centimeter and convert it to meter and kilometer
#include<stdio.h>
main()
{	float centimeter;
    float meter,kilometer;
	printf("Enter the value of length in centimeter");
	scanf("%f",&centimeter);
	meter=centimeter/100.0;
	kilometer=centimeter/100000.0;
	printf("%f centimeter=%f meter\n",centimeter,meter);
	printf("%f centimeter=%f kilometer\n",centimeter,kilometer);
	
}

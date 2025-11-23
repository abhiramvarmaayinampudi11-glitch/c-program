//program to find simple interest
#include<stdio.h>
#include<math.h>
main()
{
	float principle,rate,time,compoundinterest,amount;
	printf("Enter principle amount");
	scanf("%f",&principle);
	printf("Enter interest rate");
	scanf("%f",&rate);
	printf("Enter time period");
	scanf("%f",&time);
	compoundinterest=principle*pow((1+rate/100),time)-principle;
	printf("simple Interest=%.2f\n",compoundinterest);
	
}

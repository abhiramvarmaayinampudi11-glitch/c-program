//program to read two numbers from user and find their power
#include<stdio.h>
#include<math.h>
int main ()
{
	double base,exponent,result;
	printf("Enter base number");
	scanf("%1f",&base);
	printf("Enter exponent number");
	scanf("%1f",&exponent);
	result=pow(base,exponent);
	printf("%.2f^%.2f=%.2f",base,exponent,result);
}



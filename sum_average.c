//program to read two numbers and find the sum and average of the numbers
#include<stdio.h>
main()
{

	int a,b,sum;
	float average;
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	average=sum/2.0;
	printf("The sum of %d and %d is %d\n",a,b,sum);
	printf("The average of %d and %d is %f\n",a,b,average);
}
			
	


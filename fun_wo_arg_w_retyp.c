//function without arguments and with return type
#include<stdio.h>
int addition();
main()
{
	int result;
	result=addition();
	printf("The result is %d",result);
}
int addition()
{
	int a,b,c;
	printf("Enter a&b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}

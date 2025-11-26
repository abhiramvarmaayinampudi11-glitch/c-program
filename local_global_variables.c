//global and local variable
#include<stdio.h>
int x=10; 
void display();
main()
{
	int y=20;
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
	/*printf("The value of z is %d",z); error as it is not declared*/
	display();
}
void display()
{
	int z=30;
	printf("The value of x is %d\n",x);
	/*printf("The value of y is %d",y); error as it is not declared*/
	printf("The value of z is %d\n",z);
}

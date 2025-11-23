//sum of n numbers
#include<stdio.h>
int sum(int);
main()
{
	int n,total;
	printf("Enter n value");
	scanf("%d",&n);
	total=sum(n);
	printf("Sum of n numbers is %d",total);
	
}
int sum(int n)
{
	int i=0,total=0;
	for(i=0;i<=n;i++)
	{
		total=total+i;
	}
	return total;
}

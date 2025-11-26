//program to find prime numbre or not using functions
#include<stdio.h>
int prime(int);
int main()
{
	int n,count;
	printf("Enter n value");
	scanf("%d",&n);
	count=prime(n);
	if(count==2)
	  printf("Prime number");  
	else
	  printf("Not prime number");
    
    return 0;
}
int prime(int x)
{
	int count=0,i;
	
for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count=count+1;
	}
	return count;
}

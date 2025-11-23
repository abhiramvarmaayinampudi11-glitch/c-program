//program to convert days into years, months and days (Ignoring leap year and considering 1 month is 30 days
#include<stdio.h>
main()
{
	int year,month,days;
	printf("Enter the number of days");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	month=days/30;
	days=days%30;
	printf("No of years=%d\n",year);
	printf("No of months=%d\n",month);
	printf("No of days=%d\n",days);
}

//program to find length of string
#include<stdio.h>
main()
{
	char mystr[20];
	int i,len=0;
	printf("Enter a string ");
	gets(mystr);
	for(i=0;mystr[i]!='\0';i++)
	{
		len=len+1;
		
	}
	printf("The length of string is %d",len);
}

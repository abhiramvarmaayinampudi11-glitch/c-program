//canctination
#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i=0,j,len=0;
	printf("enter string1");
	gets(s1);
	printf("enter srting2");
	gets(s2);
	for(j=0;s1[i]!='\0';i++)
	{
		len++;
		
	}
	for(j=0;s2[j]!='\0';j++,len++)
	{
		s1[len]=s2[j];
	}
	s1[len]='\0';
	printf("The cancatinated string is %s",s1);
	
	return 0;
	
}

// write a simple program to read int, float, char and string using scnaf() and display using printf() in all the above given platforms 
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch; 
	char s[100];
	printf("Enter a integer");
	scanf("%d",&x);
	printf("Enter floating point number");
	scanf("%f",&y);
	printf("Enter a character");
	scanf("\n");
	scanf("%c",&ch);
	printf("Enter a word");
	scanf("%s",s);
	printf("The integer is %d\n",x);
	printf("The floating point number is %f\n",y);
	printf("The character is %c\n",ch);
	printf("The string is %s",s);
}

//simple calculator
#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("Enter operator (+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case'+':
			printf("The sum is %d",n1+n2);
			break;
			case'-':
				printf("The difference is %d",n1-n2);
				break;
				case'*':
					printf("The product is %d",n1*n2);
					break;
					case'/':
						printf("The quotient is %d",n1/n2);
						break;
						case'%':
							printf("The remainder is %d",n1%n2);
							break;
							default:
								printf("Invalid  operator");		
	}
}

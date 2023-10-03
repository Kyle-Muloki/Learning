#include <stdio.h>

void main()
{
	int a, b, sum, sub, mult, div;
	char operator;

	printf("enter operator: \n");
	scanf("%c", &operator);

	printf("enter values: \n");
	scanf("%d %d", &a, &b);

	switch(operator)
	{
		case '+':
			sum = a + b;
			printf("sum = %d\n", sum);
		break;

		case '-':
			sub = a - b;
		printf("sub = %d\n", sub);
		break;

		case '*':
			mult = a * b;
		printf("mult = %d\n", mult);
		break;

		case '/':
			div = a / b;
		printf("div = %d\n", div);
		break;

		default:
			printf("enter valid operator");

	}
	
}

#include <stdio.h>

void main()
{
	int number, i, mult;

	printf("enter number: \n");
	scanf("%d", &number);

	for (i = 1 ; i <= 10 ; i++)
	{
		mult = number * i;

		printf("%d x %d = %d\n", number, i, mult); 

	}
}

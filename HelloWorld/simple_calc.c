#include <stdio.h>

int main()
{
	printf("My First Calculator\n");

	int x = 8;
	int y = 4;

	int sum = x + y;
	int difference = x - y;
	int product = x * y;
	int quotient = x / y;

	printf("%d + %d = %d\n", x, y, sum);
	printf("%d - %d = %d\n", x, y, difference);
	printf("%d * %d = %d\n", x, y, product);
	printf("%d / %d = %d\n", x, y, quotient);

	printf("It is great to be a programmer\n");

	return (0);
}
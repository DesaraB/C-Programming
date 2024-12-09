#include <stdio.h>

int main()
{
	int number;
	int i;
	int sum;

	printf("Enter a positive number: ");
	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		sum +=i;
	}
	printf("The sum of numbers from 1 to %d is %d. \n", number, sum);
	return (0);
}
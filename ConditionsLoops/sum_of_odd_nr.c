#include <stdio.h>

int main()
{
	int number;
	int i;
	int sum;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	printf("The sum of odd numbers from 1 to %d is %d. \n", number, sum);
	return (0);
}

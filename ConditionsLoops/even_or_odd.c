#include <stdio.h>

int main()
{
    int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Number %d is even.\n", number);
    } else {
        printf("Number %d is odd.\n", number);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100): ");

    while (1)
	{
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
		{
            printf("Too low! Try again: ");
        } 
		else if (guess > number)
		{
            printf("Too high! Try again: ");
        } 
		else
		{
            printf("Correct! It took you %d attempts.\n", attempts);
            break;
        }
    }
    return 0;
}

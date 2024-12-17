#include <stdio.h>

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("The number %d is Even.\n", number);
    } else {
        printf("The number %d is Odd.\n", number);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}

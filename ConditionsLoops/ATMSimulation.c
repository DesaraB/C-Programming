#include <stdio.h>

int main() {
    int balance = 1000;
    int withdrawal;

    printf("Enter the withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (withdrawal % 10 != 0)
	{
        printf("Error. \n");
    } 
	else if (withdrawal > balance)
	{
        printf("Error: Insufficient funds.\n");
    }
	else
	{
        balance -= withdrawal;
        printf("Withdrawal successful. Remaining balance: $%d\n", balance);
    }
    return 0;
}

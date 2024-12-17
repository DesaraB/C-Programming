#include "bank.h"
#include <stdio.h>

void display_clients(BankClient clients[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Name: %s, Account Number: %d, Balance: %.2f", 
				clients[i].name, clients[i].account_number, clients[i].balance);
	}
}

void viewBalance(BankClient clients[], int size, int accountNumber)
{
	for (int i = 0; i < size; i++)
	{
        if (clients[i].account_number == accountNumber)
		{
            printf("Account balance for %s: $%.2f\n", clients[i].name, clients[i].balance);
            return;
		}
	}
	printf("Account number %d not found.\n", accountNumber);
}

void deposit(BankClient clients[], int size, int accountNumber, float amount)
{
	for (int i = 0; i < size; i++) {
        if (clients[i].account_number == accountNumber)
		{
            if (amount > 0)
			{
                clients[i].balance += amount;
                printf("Deposited $%.2f. New balance: $%.2f\n", amount, clients[i].balance);
            } 
			else
			{
                printf("Invalid deposit amount. Must be greater than zero.\n");
            }
            return;
        }
    }
    printf("Account number %d not found.\n", accountNumber);
}

void withdraw(BankClient clients[], int size, int accountNumber, float amount)
{
    for (int i = 0; i < size; i++)
	{
        if (clients[i].account_number == accountNumber) {
            if (amount <= 0) {
                printf("Invalid withdrawal amount. Must be greater than zero.\n");
                return;
            }
            if (clients[i].balance >= amount) {
                clients[i].balance -= amount;
                printf("Withdrawn $%.2f. New balance: $%.2f\n", amount, clients[i].balance);
            } else {
                printf("Insufficient funds. Current balance: $%.2f\n", clients[i].balance);
            }
            return;
        }
    }
    printf("Account number %d not found.\n", accountNumber);

}

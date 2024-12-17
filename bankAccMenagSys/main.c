#include "bank.h"
#include <stdio.h>

int main()
{
	int i;
	int choice;
	float amount;
	int account_number;

	BankClient clients[] = 
	{
	{"joy", 1001, 1000.0},
	{"sara", 1002, 1500.0},
    {"milo", 1003, 2000.0},
	{"mario", 1004, 500.0},
	};

	int size = sizeof(clients) / sizeof(clients[0]);
	

	while (1)
	{
	printf("1. View balance\n");
	printf("2. Deposit money\n");
	printf("3. Withdraw money\n");
	printf("4. Exit\n");
	printf("Please enter your choice: ");
	scanf("%d", &choice);

	if (choice != 4)
	{
		printf("Please enter account number: ");
		scanf("%d", &account_number);
	}

	if (choice == 2 || choice == 3)
	{
		printf("Please enter the amount: ");
		scanf("%f", &amount);
	}

	switch(choice)
	{
    case 1: viewBalance(clients, size, account_number); 
	break;
    case 2: deposit(clients, size, account_number, amount); 
	break;
    case 3: withdraw(clients, size, account_number, amount); 
	break;
    case 4: printf("Exiting program...\n"); 
	return (1);
    default: printf("Invalid choice. Try again.\n");

	}

	}
	return (0);


}
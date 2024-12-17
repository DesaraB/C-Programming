#ifndef BANK_H
#define BANK_H

typedef struct BankClient {
    char name[100];
    int account_number;
    float balance;
}BankClient;

void display_clients(BankClient clients[], int size);
void viewBalance(BankClient clients[], int size, int accountNumber);
void deposit(BankClient clients[], int size, int accountNumber, float amount);
void withdraw(BankClient clients[], int size, int accountNumber, float amount);

#endif

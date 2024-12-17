#include <stdio.h>
#include <string.h>

void checkPassword(char input[])
{
    char correctPassword[] = "1234";
    if (strcmp(input, correctPassword) == 0) 
	{
        printf("Access Granted\n");
    } else
	{
        printf("Access Denied\n");
    }
}

int main() {
    char password[20];
    printf("Enter the password: ");
    scanf("%s", password);
    checkPassword(password);
    return 0;
}

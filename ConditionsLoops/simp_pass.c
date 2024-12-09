#include <stdio.h>

int main() {
    int password;

    printf("Enter password: ");
    scanf("%d", &password);

    if (password == 1234) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    return 0;
}

/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Pasword_grant
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted.\n");

    return 0;
}
    
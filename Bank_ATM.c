/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Bank ATM that prompts the user the amount to withdraw. 
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter the balance in account : ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw;

        if (balance > 0)
            printf("balance due: %.2f\n", balance);
        else
            printf("Balance is now %.2f — No more withdrawals .\n", balance);
    }

    printf("\nTransaction ended.\n");

    return 0;
}
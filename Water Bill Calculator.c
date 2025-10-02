/*
Name:Mwangi Samuel
Reg No:CT100/G/26145/25
Description: Calculate Water Bill
*/
#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    // Prompt user input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate bill 
    if (units <= 30) {
        bill = units * 20.0;
    }
    else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    }
    else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Display bill 
    printf("Total water bill: %.2f KES\n", bill);
printf("____________________________________");
    return 0;
}
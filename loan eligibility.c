/*

Name: Mwangi Samuel
Reg. No.:CT100/G/26145/25
Description:program to Check loan eligibility 

*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Input your age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Input your annual income
    printf("Please enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check conditions
    if (age >= 21 & income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else  {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}



/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Eligibility to final exams 
*/


#include <stdio.h>

int main() {
    float attendance, average_Marks;

    // Input attendance percentage
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
   // Input average marks
    printf("Enter average marks: ");
    scanf("%f", & average_Marks);

    // Check eligibility
    if (attendance >= 75 && average_Marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
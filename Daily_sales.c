/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Calculate Total Daily Sales from File: 
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // (i) Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt file.\n");
        return 1;
    }

    // (ii) Read each transaction and calculate total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // (iii) Close the file properly
    fclose(file);

    // Display total sales
    printf("Total sales for the day: KSh. %.2f\n", total);

    return 0;
}

/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Read and Display Student Results from a Binary File 
*/
#include <stdio.h>


struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    //Open the binary file 
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat file.\n");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("-----------------------------\n");

    //  Read all student records
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n", s.totalMarks);
        printf("-----------------------------\n");
    }

    fclose(file);
    return 0;
}

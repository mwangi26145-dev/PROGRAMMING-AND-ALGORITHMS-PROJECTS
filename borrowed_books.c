/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description: Record Borrowed Book Titles
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open file in append mode so it doesn't delete existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);  // Read book title including spaces

    // Write the title to the file
    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}


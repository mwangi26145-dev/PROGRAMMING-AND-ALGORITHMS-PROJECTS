/*
Name:Mwangi Samuel
Reg No.:CT100/G/26145/25
Description:Number guessing game 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 20
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");

    // Loop until the player guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; // Count each guess

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d\n", secretNumber);
            printf("It took you %d attempts.\n", attempts);
            break; // Exit the loop when guessed correctly
        }
    }

    return 0;
}
    
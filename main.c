#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // random number every time
    srand(time(0));

    // secret number between 1-100
    int secret = rand() % 100 + 1;
    // where the guess is stored
    int guess;
    // times a player has guessed - starts at zero
    int tries = 0;

    printf("I have picked a random number between 1 and 100.\n");
    printf("Can you guess it?\n");

    // true - infinite loop
    while(1) {
        printf("Your guess: ");
        scanf("%d", &guess);
        tries++; // tries = tries + 1

        if (guess == secret) {
            printf("\nCongratulations.You got it!\n");
            printf("Your number was %d\n",secret);
            printf("You needed %d tries!",tries);
            break;

        }

        else if (guess < secret) {
            printf("Too low! Try again\n\n");
        }

        else if (guess > secret) {
            printf("Too high! Try again.\n");
        }


    }
    printf("\nThanks for playing!\n");
    return 0;

}


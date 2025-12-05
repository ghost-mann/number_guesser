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
    printf("can you guess it?");

    while(1) {

    }

}


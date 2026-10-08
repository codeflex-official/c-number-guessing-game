#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void main() {
    int number, guess, attempts = 0;
    clrscr();

    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("I have guessed a number between 1 to 100\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too High! Try smaller.");
        } else if (guess < number) {
            printf("Too Low! Try bigger.");
        } else {
            printf("\n\n*** CONGRATULATIONS! ***\n");
            printf("You guessed it in %d attempts", attempts);
        }
    } while (guess != number);

    printf("\n\nThanks for playing - CodeFlex Official");
    getch();
}

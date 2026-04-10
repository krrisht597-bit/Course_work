#include <stdio.h>
#include <stdbool.h>

int main() {
    int winnum = 5, y, count = 1;
    bool z = true;
    int i;

    printf("\nGuess a number between 1 to 100: ");
    scanf("%d", &y);

    for (i = 1; z; i++) {

        if (winnum == y) {
            printf("\nYou win! You guessed it in %d tries.\n", count);
            z = false;
            break;
        }
        else {
            if (winnum > y) {
            	
                printf("\nYou guessed too low!");
            } else {
                printf("\nYou guessed too high!");
            }

            count++;
            printf("\nGuess again: ");
            scanf("%d", &y);
        }
    }
    return 0;
}


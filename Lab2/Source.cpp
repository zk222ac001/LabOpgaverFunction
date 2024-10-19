#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    secret_number = rand() % 100; // Generate a random number between 0 and 99
    printf("System generate Guess number so you need to Guess:\n");
    printf("Gæt et tal mellem 0 og 99:\n");

    do {
        printf("Indtast dit gæt: ");
        scanf_s("%d", &guess);
        attempts++;

        if (guess < secret_number) {
            printf("Dit gæt er mindre end det hemmelige tal.\n");
        }
        else if (guess > secret_number) {
            printf("Dit gæt er større end det hemmelige tal.\n");
        }
        else {
            printf("Tillykke! Du har gættet det hemmelige tal.\n");
            printf("Du brugte %d gæt.\n", attempts);
        }
    } while (guess != secret_number);

    return 0;
}

/*
program bruger rand() til at generere et tilfældigt tal mellem 0 og 99. 
Brugeren bliver bedt om at indtaste et gæt, og programmet fortæller, 
om gættet er større end, mindre end eller lig med det hemmelige tal. 
Dette gentages, indtil brugeren gætter det rigtige tal, og 
programmet viser, hvor mange gæt der blev brugt.
*/
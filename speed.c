#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    double time_taken;
    int char_count = 0;

    printf("Type the following sentence:\n");
    printf("The quick brown fox jumps over the lazy dog.\n");

    printf("\nPress Enter to start typing...");
    getchar();

    start = clock();

    printf("\n");

    // Read user input until they press Enter
    while (getchar() != '\n') {
        char_count++;
    }

    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    double typing_speed = (char_count / 5) / (time_taken / 60);

    printf("\n");
    printf("Time taken: %.2f seconds\n", time_taken);
    printf("Character count: %d\n", char_count);
    printf("Typing speed: %.2f words per minute\n", typing_speed);

    return 0;
}


#include <stdio.h>

int main() {
    char letter;

    printf("Alphabets from a to z:\n");

    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c ", letter);
    }

    return 0;
}

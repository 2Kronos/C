#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'A' || alphabet == 'e' || alphabet == 'E' ||
        alphabet == 'i' || alphabet == 'I' || alphabet == 'o' || alphabet == 'O' ||
        alphabet == 'u' || alphabet == 'U') {
        printf("%c is a vowel.\n", alphabet);
    } else {
        printf("%c is a consonant.\n", alphabet);
    }

    return 0;
}


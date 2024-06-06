#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers in reverse order from %d to 1:\n", n);

    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}


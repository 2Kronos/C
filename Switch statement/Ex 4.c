#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}

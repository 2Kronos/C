#include <stdio.h>

int main() {
    int row, column;

    printf("Multiplication Table:\n");

    for (row = 1; row <= 5; row++) 
    {
        
        for (column = 1; column <= 10; column++) 
        {
            printf("%d\t", row * column);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    float CP, SP, profit_loss;

    // Input cost price (CP) and selling price (SP)
    printf("Enter the cost price (CP): ");
    scanf("%f", &CP);

    printf("Enter the selling price (SP): ");
    scanf("%f", &SP);

    // Check for profit or loss
    if (SP > CP) {
        profit_loss = SP - CP;
        printf("Profit: %.2f\n", profit_loss);
    } else if (SP < CP) {
        profit_loss = CP - SP;
        printf("Loss: %.2f\n", profit_loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}

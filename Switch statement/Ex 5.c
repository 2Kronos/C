#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

int main() {
    char userId[MAX_LENGTH];
    char password[MAX_LENGTH];

    // Assume there is only one valid user with ID "admin" and password "password123"
    char validUserId[] = "admin";
    char validPassword[] = "password123";

    printf("Enter user ID: ");
    scanf("%s", userId);

    // Check if the entered user ID matches the valid user ID
    if (strcmp(userId, validUserId) == 0) {
        printf("Enter password: ");
        scanf("%s", password);

        // Check if the entered password matches the valid password
        if (strcmp(password, validPassword) == 0) {
            printf("Welcome, %s!\n", userId);
        } else {
            printf("Incorrect password.\n");
        }
    } else {
        printf("Incorrect ID.\n");
    }

    return 0;
}


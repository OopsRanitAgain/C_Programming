#include <stdio.h>

int main() {
    char choice;
    int rows, i, j, spaces;

    // Input the character choice
    printf("Enter the choice of the character (A-Z): ");
    scanf(" %c", &choice);

    // Validate the input
    if (choice < 'A' || choice > 'Z') {
        printf("Invalid input! Please enter an uppercase letter from A to Z.\n");
        return 1;
    }

    rows = choice - 'A' + 1; // Determine the number of rows
    printf("rows :%d\n",rows);

    // Loop for each row
    for (i = rows; i >= 1; i--) {
        // Print the left side of the pattern
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }

        // Print spaces in the middle
        spaces = 2 * (rows - i); // Calculate the number of spaces
        for (j = 0; j < spaces; j++) {
            printf("  "); // Two spaces to align characters
        }

        // Print the right side of the pattern
        for (j = i-1 ; j >=0; j--) {
            printf("%c ", 'A' + j);
        }

        printf("\n"); // Move to the next row
    }

    return 0;
}

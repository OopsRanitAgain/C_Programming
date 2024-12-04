#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter the number > ");
    scanf("%d", &num);

    // Display the top border
    printf("+-------------------------------+\n");

    // Display the first row: multiples of the number
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%-3d ", num * i); // %-3d ensures proper alignment
    }
    printf("|\n");

    // Display the second row: indices
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%-3d ", i); // %-3d ensures proper alignment
    }
    printf("|\n");

    // Display the third row: the original number repeated
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%-3d ", num); // %-3d ensures proper alignment
    }
    printf("|\n");

    // Display the bottom border
    printf("+-------------------------------+\n");

    return 0;
}

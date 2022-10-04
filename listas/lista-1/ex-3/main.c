#include <stdio.h>
#define SIZE 10

int main() {
    float numbers[SIZE], squaredNumbers[SIZE];

    for(int i = 0; i < SIZE; i++) {
        printf("Enter a float value: ");
        scanf("%f", &numbers[i]);

        squaredNumbers[i] = numbers[i] * numbers[i];
    }

    printf("Numbers: \n");
    printf("%.2f", numbers[0]);
    for(int i = 1; i < SIZE; i++) {
        printf(", %.2f", numbers[i]);
    }

    printf("\nSquared Numbers: \n");
    printf("%.2f", squaredNumbers[0]);
    for(int i = 1; i < SIZE; i++) {
        printf(", %.2f", squaredNumbers[i]);
    }
    printf("\n");

    return 0;
}
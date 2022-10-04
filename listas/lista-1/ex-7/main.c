#include <stdio.h>
#define SIZE 3

int main() {
    int numbers[SIZE][SIZE], up = 0, down = 0;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("Enter a value: ");
            scanf("%d", &numbers[i][j]);
        }
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(j > i) up += numbers[i][j];
            else if(j < i) down += numbers[i][j];
        }
    }

    printf("Sum of numbers above main diagonal: %d\n", up);
    printf("Sum of numbers below main diagonal: %d\n", down);

    return 0;
}
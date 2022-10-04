#include <stdio.h>
#define SIZE 4

int main() {
    int numbers[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            numbers[i][j] = i*j;
        }
    }

    for(int i = 0; i < SIZE; i++) {
        printf("\n|");
        for(int j = 0; j < SIZE; j++) {
            printf(" %d |", numbers[i][j]);
        }
    }
    printf("\n\n");

    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5

int exists(int numbers[SIZE][SIZE], int l, int c) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(numbers[i][j] == numbers[l][c]) {
                if(i != l || j != c) return 1;
            }
            else if(numbers[i][j] == -1) return 0;
        }
    }
    
    return 0;
}

void clearArray(int numbers[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            numbers[i][j] = -1;
        }
    }
}

int main() {
    srand(time(NULL));

    int numbers[SIZE][SIZE];
    clearArray(numbers);

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            do {
                numbers[i][j] = rand() % 100;
            } while(exists(numbers, i, j));
        }
    }

    for(int i = 0; i < SIZE; i++) {
        printf("\n|");
        for(int j = 0; j < SIZE; j++) {
            if(numbers[i][j] < 10) printf(" 0%d |", numbers[i][j]);
            else printf(" %d |", numbers[i][j]);
        }
    }

    printf("\n\n");

    return 0;
}
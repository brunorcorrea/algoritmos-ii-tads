#include <stdio.h>
#define SIZE 4

int main() {
    int numbers[SIZE][SIZE], cont = 0;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("Enter a value: ");
            scanf("%d", &numbers[i][j]);

            if(numbers[i][j] > 10) {
                cont++;
            }
        }
    }

    printf("Numbers greater than 10: %d", cont);
    
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int numbers[6];
    
    for(int i = 0; i < 6; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }
    
    printf("%d", numbers[0]);
    for(int i = 1; i < 6; i++) {
        printf(", %d", numbers[i]);
    }
    printf("\n");

    return 0;
}
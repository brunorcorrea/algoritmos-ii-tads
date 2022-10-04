#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int sum = A[0] + A[1] + A[5];
    
    printf("The sum of the positions 0, 1 and 5 is: %d\n", sum);
    printf("Array A:\n");
    
    for(int i = 0; i < 6; i++) {
        printf("Value in position [%d]: %d\n", i, A[i]);
    }
    
    return 0;
}
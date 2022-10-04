#include <stdio.h>
#define SIZE 10

int main() {
    float numbers[SIZE], bigger, smaller;

    for(int i = 0; i < SIZE; i++) {
        printf("Enter a float value: ");
        scanf("%f", &numbers[i]);
        
        if(i == 0) {
            bigger = smaller = numbers[i];
        }
        else {
            if (numbers[i] > bigger) bigger = numbers[i];
            if(numbers[i] < smaller) smaller = numbers[i];
        }
    }

    printf("The biggest number is: %.2f\n", bigger);
    printf("The smallest number is: %.2f\n", smaller);

    return 0;
}
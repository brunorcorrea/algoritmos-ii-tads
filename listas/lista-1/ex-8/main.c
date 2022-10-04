#include <stdio.h>
#define SIZE 10

int main() {
    float number;

    printf("Enter a value: ");
    scanf("%f", &number);
    
    if(number < 0) number *= -1;
    
    printf("The absolute value is: %.2f\n", number);

    return 0;
}
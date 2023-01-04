#include <stdio.h>

int main() {
    int num1 = 2, num2 = 3;
    printf("Maior endereco: %p\n", &num1 > &num2 ? &num1 : &num2);
    return 0;
}
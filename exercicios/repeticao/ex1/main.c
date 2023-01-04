// Elabore um programa que leia dois valores do usuário e a operação que ele deseja executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima na tela

#include <stdio.h>

float calcula(float n1, float n2, char op) {
    switch(op) {
        case '+': return (n1 + n2);
        case '-': return (n1 - n2);
        case '*': return (n1 * n2);
        case '/': return (n1 / n2);
    }
}

int main() {
    float n1, n2;
    char op;

    printf("Digite o primeiro valor:");
    scanf("%f", &n1);
    printf("Digite o segundo valor:");
    scanf("%f", &n2);

    printf("Digite o operador:");
    scanf(" %c", &op);

    printf("%.2f%c%.2f = %.2f\n", n1, op, n2, calcula(n1, n2, op));
}
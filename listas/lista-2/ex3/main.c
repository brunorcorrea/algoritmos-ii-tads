#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);
    printf("Insira o segindo valor: ");
    scanf("%d", &num2);
    
    printf("Conteudo do maior endereco: %d\n", &num1 > &num2 ? num1 : num2);
    return 0;
}
// Escreva um programa que leia o código de um determinado produto e mostre a sua classificação. Utilize a tabela abaixo 
//como referência:

//codigo: 1 descrição: Alimento não perecível
//codigo: 2 descrição: Alimento perecível
//codigo: 3 descrição: Vestuário
//codigo: 4 descrição: Limpeza

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Alimento não perecível\n");
            break;
        case 2:
            printf("Alimento perecível\n");
            break;
        case 3:
            printf("Vestuário\n");
            break;
        case 4:
            printf("Limpeza\n");
            break;
    }

    return 0;
}
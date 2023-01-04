//) Escrever um Programa que lê o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos 
// exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula: 
// MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
// A atribuição de conceitos obedece a tabela abaixo:
// Média de Aproveitamento Conceito
//  >= 9,0 A
// >= 7,5 e < 9,0 B
// >= 6,0 e < 7,5 C
// >= 4,0 e < 6,0 D
// < 4,0 E

#include <stdio.h>

int main() {
    int id;
    float nota1, nota2, nota3, me, ma;

    printf("Digite o número de identificação: ");
    scanf("%d", &id);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a média dos exercícios: ");
    scanf("%f", &me);

    ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7;

    if (ma >= 9) {
        printf("A\n");
    } else if (ma >= 7.5) {
        printf("B\n");
    } else if (ma >= 6) {
        printf("C\n");
    } else if (ma >= 4) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}
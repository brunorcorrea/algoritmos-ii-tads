//As maçãs custam R$ 1,50 cada se forem compradas menos de uma dúzia, e R$ 1,15 se forem compradas pelo menos 12. 
//Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra

#include <stdio.h>
int main() {
    int qtd;
    float preco;
    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &qtd);
    if (qtd < 12) {
        preco = qtd * 1.5;
    } else {
        preco = qtd * 1.15;
    }
    printf("O preço total é: %.2f\n", preco);
}
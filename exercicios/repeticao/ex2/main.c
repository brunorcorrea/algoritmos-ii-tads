/*
Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o 
valor total a ser pago por uma pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se 
o comprador é um cliente comum (1), funcionário (2) ou vip
*/

#include <stdio.h>

int main() {
    float valor, desconto, total;
    int codigo;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("Digite o código do cliente: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        desconto = valor * 0.05;
    } else if (codigo == 2) {
        desconto = valor * 0.1;
    } else {
        desconto = 0;
    }

    total = valor - desconto;

    printf("Valor total: %.2f - Desconto: %.2f - Total a pagar: %.2f\n", valor, desconto, total);
}
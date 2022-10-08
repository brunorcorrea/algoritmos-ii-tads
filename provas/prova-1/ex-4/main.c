#include <stdio.h>

void inverte(int* vetor) {
    for (int i = 0; i < 5 / 2; i++)
    {
        int aux = vetor[i];
        vetor[i] = vetor[4 - i];
        vetor[4 - i] = aux;
    }
}

int main()
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    inverte(vetor);

    printf("\nVetor invertido: %d", vetor[0]);

    for (int i = 1; i < 5; i++)
    {
        printf(" - %d", vetor[i]);
    }
    printf("\n");

    return 0;
}
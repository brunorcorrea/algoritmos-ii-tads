#include <stdio.h>

int main()
{
    int matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] *= 2;
        }
    }

    printf("\n\nMatriz Dobrada:\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        for (int j = 0; j < 3; j++)
        {
            if(matriz[i][j] < 10) printf("0");
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
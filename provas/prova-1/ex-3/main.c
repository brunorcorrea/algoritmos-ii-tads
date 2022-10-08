#include <stdio.h>

int main()
{
    int nums[6], maior, menor, cont = 0;
    float media = 0.0;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &nums[cont]);
        if (cont == 0)
        {
            maior = nums[cont];
            menor = nums[cont];
        }
        else
        {
            if (nums[cont] > maior)
            {
                maior = nums[cont];
            }
            if (nums[cont] < menor)
            {
                menor = nums[cont];
            }
        }
        
        media += nums[cont];
        cont++;
    } while (cont < 6);

    printf("\n\nO maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);
    printf("A media eh: %.2f\n", media / 6);

    return 0;
}
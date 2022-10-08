#include <stdio.h>

int avaliar(float nota)
{
    if (nota >= 6)
        return 1;
    return 0;
}

int main()
{
    float nota;
    printf("Digita uma nota: ");
    scanf("%f", &nota);
    if (avaliar(nota) == 1)
    {
        printf("\nAprovado\n");
    }
    else
    {
        printf("\nReprovado\n");
    }
    return 0;
}
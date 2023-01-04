//) Crie um programa em que o usuário entrar com sua idade, e ela dirá se o usuário tem idade para tirar carteira de habilitação e se esta no momento de realizar seu alistamento militar obrigatório

#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Você tem idade para tirar carteira de habilitação.\n");
        if (idade == 18)
        {
            printf("Esta no momento de realizar seu alistamento militar obrigatorio.\n");
        }
    }
    else
    {
        printf("Voce ainda nao pode tirar carteira de habilitacao.\n");
    }

    return 0;
}
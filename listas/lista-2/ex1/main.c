#include <stdio.h>

void imprimeValores(int numInt, float numFloat, char ch)
{
    printf("Inteiro: %d\n", numInt);
    printf("Float: %.2f\n", numFloat);
    printf("Char: %c\n", ch);
}

int main()
{
    int numInt = 3, *ptrInt;
    float numFloat = 2.1, *ptrFloat;
    char ch = 'A', *ptrCh;

    ptrInt = &numInt;
    ptrFloat = &numFloat;
    ptrCh = &ch;

    printf("Valores antes da alteracao:\n");
    imprimeValores(numInt, numFloat, ch);

    *ptrInt = 5;
    *ptrFloat = 7.8;
    *ptrCh = 'D';

    printf("\nValores depois da alteracao:\n");
    imprimeValores(numInt, numFloat, ch);

    return 0;
}
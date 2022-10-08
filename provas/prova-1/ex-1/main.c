#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Digite um numero par: ");
        scanf("%d", &num);
    } while (num % 2 != 0);

    printf("\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
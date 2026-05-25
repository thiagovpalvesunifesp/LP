#include <stdio.h>

void simplifica(int *num, int *den)
{
    int mdc;

    for (int i = 1; i <= *num && i <= *den; i++)
    {
        if (*num % i == 0 && *den % i == 0)
        {
            mdc = i;
        }
    }

    *num = *num / mdc;
    *den = *den / mdc;
}

int main()
{
    int numerador, denominador;

    printf("Digite o numerador: ");
    scanf("%d", &numerador);

    printf("Digite o denominador: ");
    scanf("%d", &denominador);

    simplifica(&numerador, &denominador);

    printf("Fracao simplificada: %d/%d\n", numerador, denominador);

    return 0;
}
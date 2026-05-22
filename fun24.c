#include <stdio.h>

void triangulo(int n);

int main()
{
    int n;

    printf("Digite um valor:\n");
    scanf("%d", &n);

    triangulo(n);

    return 0;
}

void triangulo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
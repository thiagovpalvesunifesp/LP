#include <stdio.h>

int soma(int n)
{
    if (n == 1)
        return 1;

    return n + soma(n - 1);
}

int main()
{
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Soma = %d\n", soma(n));

    return 0;
}
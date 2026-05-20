#include <stdio.h>

int maior(int, int);

int main()
{
    int n1, n2, x;

    printf("Digite um valor:\n");
    scanf("%d", &n1);
    printf("Digite outro valor:\n");
    scanf("%d", &n2);

    x = maior(n1, n2);
    printf("%d", x);
}

int maior(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
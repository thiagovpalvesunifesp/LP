#include <stdio.h>

int main()
{
    int n, i;
    printf("digite n: \n");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("digite um valor maior que 0 para n: \n");
        scanf("%d", &n);
    }

    for (i = 1; i <= n; i++)
    {
        printf(" %d\n", i);
    }
}
#include <stdio.h>

int main()
{
    int n1, n2, i, soma = 0;
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    while (n2 < n1)
    {
        printf("Digite n2 maior doque n1: ");
        scanf("%d", &n2);
    }

    for (i = n1; i <= n2; i++)
    {
        soma += i;
    }
    printf("O valor da soma e: %d", soma);
}
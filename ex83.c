#include <stdio.h>

int main()
{
    int a[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &a[i]);
    }

    printf("Valores invertidos: \n");
    for (int i = 19; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}
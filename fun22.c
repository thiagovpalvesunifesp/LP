#include <stdio.h>

void lin(int);

int main()
{
    int n;

    printf("Digite um n:\n");
    scanf("%d", &n);

    lin(n);
}

void lin(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}
#include <stdio.h>

void paresCrescente(int n)
{
    if (n < 0)
        return;

    paresCrescente(n - 2);
    printf("%d ", n);
}

int main()
{
    int n;

    scanf("%d", &n);

    paresCrescente(n);

    return 0;
}
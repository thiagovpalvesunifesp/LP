#include <stdio.h>

long long fatorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fatorial(n - 1);
}

int main()
{
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Fatorial = %lld\n", fatorial(n));

    return 0;
}
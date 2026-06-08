#include <stdio.h>

float serie(int n)
{
    if (n == 1)
        return 2.0;

    return ((n * n) + 1.0) / n + serie(n - 1);
}

int main()
{
    int n;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("S = %.2f\n", serie(n));

    return 0;
}
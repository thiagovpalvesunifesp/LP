#include <stdio.h>

int somaSerie(int i, int j, int k)
{
    if (i > j)
        return 0;

    return i + somaSerie(i + k, j, k);
}

int main()
{
    printf("%d\n", somaSerie(1, 10, 2));

    return 0;
}
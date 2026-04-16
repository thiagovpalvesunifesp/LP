#include <stdio.h>

int main()
{
    int v[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        v[i] = i + 1;
    }

    for (i = 0; i < 10; i++)
    {
        printf("(%d, ", i + 1);

        for (j = 0; j < 10; j++)
        {
            printf("%d ", v[j]);
        }

        printf(")\n");
    }
}
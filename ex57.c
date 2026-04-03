#include <stdio.h>

int main()
{
    float n1, n2, n3;
    printf("digite n1:");
    scanf("%f", &n1);
    printf("digite n2:");
    scanf("%f", &n2);
    printf("digite n3:");
    scanf("%f", &n3);

    if (n1 > n2 && n1 < n3)
    {
        printf("%f, %f, %f", n3, n1, n2);
    }
    else if (n1 < n2 && n1 > n3)
    {
        printf("%f, %f, %f", n2, n1, n3);
    }
    else if (n2 < n3 && n2 > n1)
    {
        printf("%f, %f, %f", n3, n2, n1);
    }
    else if (n2 > n3 && n2 < n1)
    {
        printf("%f, %f, %f", n1, n2, n3);
    }
    else if (n3 < n2 && n3 > n1)
    {
        printf("%f, %f, %f", n2, n3, n1);
    }
    else
    {
        printf("%f, %f, %f", n1, n3, n2);
    }
}
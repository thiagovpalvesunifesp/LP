#include <stdio.h>

int main()
{
    int vet[5], soma=0, maior, menor;
    float media;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
        soma+=vet[i];
    }
    maior=vet[0];
    menor=vet[0];   
    media=soma/5;
    
    for (int i = 1; i < 5; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
        }
        if (vet[i]<menor)
        {
            menor=vet[i];
        }
    }
    printf("A media e: %.2f\n", media);
    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d", menor);
}
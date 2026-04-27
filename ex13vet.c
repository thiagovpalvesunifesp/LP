#include <stdio.h>

int main()
{
    int vet[5], posmai=0, posmen=0, maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vet[i]);
    }
    maior=vet[0];
    menor=vet[0];   
    
    for (int i = 1; i < 5; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
            posmai=i;
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if (vet[i]<menor)
        {
            menor=vet[i];
            posmen=i;
        }
    }
    
    printf("O maior esta na posicao: %d\n", posmai+1);
    printf("O menor esta na posicao: %d",posmen+1);
}
#include <stdio.h>

int main() {
    int matriz[3][4];
    int vetor[3];
    int somaTotal = 0;

    printf("Digite os elementos da matriz 3x4:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
  
    for(int i = 0; i < 3; i++) {
        vetor[i] = 0;
        for(int j = 0; j < 4; j++) {
            vetor[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        somaTotal += vetor[i];
    }

    printf("\nVetor das somas das linhas:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }
  
    printf("\n\nSoma total dos elementos do vetor: %d\n", somaTotal);

    return 0;
}

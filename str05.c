#include<stdio.h>
#include<string.h>

int main(){
    char nome[50];

    printf("Digite o nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1]='\0';

    printf("%d", strlen(nome));
}
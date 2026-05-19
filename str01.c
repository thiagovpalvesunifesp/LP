#include <stdio.h>
#include <string.h>

int main(){
    char string[50];

    printf("Digite um nome:\n");
    fgets(string,sizeof(string),stdin);
    string[strlen(string)-1]= '\0';
    printf("nome digitado:\n%s", string);
}

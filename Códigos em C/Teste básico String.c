#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];

    printf("Digite um nome: ");
    gets(nome);
    printf("Ola, %s!\n", nome);
    printf("Tamanho: %lu\n", strlen(nome));
   }
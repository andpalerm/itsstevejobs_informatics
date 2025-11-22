#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];

    printf("Inserisci il tuo nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\nCiao, %s! Benvenuto!\n", nome);
    return 0;
}
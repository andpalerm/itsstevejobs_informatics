#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], cognome[50];

    printf("Inserisci il tuo nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\nInserisci il tuo cognome: ");
    fgets(cognome, 50, stdin);
    cognome[strcspn(cognome, "\n")] = '\0';

    strcat(nome, " ");
    strcat(nome, cognome);

    printf("\nCiao, %s! Benvenuto!\n", nome);
    return 0;
}
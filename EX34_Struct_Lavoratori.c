#include <stdio.h>
#include <string.h>

struct Lavoratore {
    char nome[50];
    char cognome[50];
    int salario;
};

int main() {
    struct Lavoratore p1;

    printf("Inserisci il nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    p1.nome[strcspn(p1.nome, "\n")] = '\0';

    printf("\nInserisci il cognome: ");
    fgets(p1.cognome, sizeof(p1.cognome), stdin);
    p1.cognome[strcspn(p1.cognome, "\n")] = '\0';

    printf("\nInserisci l'età di %s %s: ", p1.nome, p1.cognome);
    scanf("%d", &p1.salario);

    strcat(p1.nome, " ");
    strcat(p1.nome, p1.cognome);
    printf("\nCiao, %s! Guadagni %d Euro al mese.\n", p1.nome, p1.salario);
    return 0;
}
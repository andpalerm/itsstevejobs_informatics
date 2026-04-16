#include <stdio.h>
#include <string.h>

struct Persona {
    char nome[50];
    char cognome[50];
    int eta;
};

void inserisciPersone(struct Persona persone[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nInserisci il nome della %d° persona: ", i + 1);
        fgets(persone[i].nome, sizeof(persone[i].nome), stdin);
        persone[i].nome[strcspn(persone[i].nome, "\n")] = '\0';

        printf("\nInserisci il cognome della %d° persona: ", i + 1);
        fgets(persone[i].cognome, sizeof(persone[i].cognome), stdin);
        persone[i].cognome[strcspn(persone[i].cognome, "\n")] = '\0';

        printf("\nInserisci l'età della %d° persona: ", i + 1);
        scanf("%d", &persone[i].eta);
        getchar();
    }
}

void stampaPersone(struct Persona persone[], int n) {
    printf("\nRubrica delle persone:\n");
    for (int i = 0; i < n; i++) {
        printf("%d° Persona: %s %s, Età: %d\n", i + 1, persone[i].nome, persone[i].cognome, persone[i].eta);
    }
}

int main() {
    struct Persona rubrica[10];
    inserisciPersone(rubrica, 10);
    stampaPersone(rubrica, 10);

    printf("\nRubrica completata.\n");
    return 0;
}
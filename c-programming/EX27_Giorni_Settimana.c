#include <stdio.h>

int main() {
    int giorno;

    printf("Inserisci un numero da 1 a 7: ");
    scanf("%d", &giorno);

    switch (giorno) {
        case 1:
            printf("\nLunedì\n");
            break;
        case 2:
            printf("\nMartedì\n");
            break;
        case 3:
            printf("\nMercoledì\n");
            break;
        case 4:
            printf("\nGiovedì\n");
            break;
        case 5:
            printf("\nVenerdì\n");
            break;
        case 6:
            printf("\nSabato\n");
            break;
        case 7:
            printf("\nDomenica\n");
            break;
        default:
            printf("\nNumero non valido. Inserisci un numero tra 1 e 7.\n");
            break;
    }

    return 0;
}
#include <stdio.h>

int main() {

    int b, h, area;

    printf("Inserisci la base del triangolo: ");
    scanf("%d", &b);

    printf("\nInserisci l'altezza del triangolo: ");
    scanf("%d", &h);

    area = (b * h) / 2;

    printf("\nL'area del triangolo e': %d\n", area);
    return 0;
}
#include <stdio.h>

int main() {

    float b, h, area;

    printf("Inserisci la base del triangolo: ");
    scanf("%f", &b);

    printf("\nInserisci l'altezza del triangolo: ");
    scanf("%f", &h);

    area = (b * h) / 2;

    printf("\nL'area del triangolo e': %.2f\n", area);
    return 0;
}
#include <stdio.h>

int feta(int eta) {
    printf("Inserisci la tua eta': ");
    scanf("%d", &eta);
    return eta;
}

int main() {
    int eta;

    eta = feta(eta);
    printf("\nLa tua eta' e': %d\n", eta);

    return 0;
}
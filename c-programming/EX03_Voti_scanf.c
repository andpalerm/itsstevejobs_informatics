#include <stdio.h>

int main() {

    int voto;

    printf("Inserisci il voto (0-10): ");
    scanf("%d", &voto);

    if (voto < 6 && voto >= 0) {
        printf("\nBocciato.\n");
    } else if (voto >= 6 && voto < 11) {
        printf("\nPromosso!\n");
    } else {
        printf("\nVoto non valido.\n");
    }
    return 0;
}
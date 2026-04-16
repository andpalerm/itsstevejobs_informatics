#include <stdio.h>

int main() {

    int voto = 7;

    if (voto < 6 && voto >= 0) {
        printf("Bocciato.\n");
    } else if (voto >= 6 && voto < 11) {
        printf("Promosso!\n");
    } else {
        printf("Voto non valido.\n");
    }
    return 0;
}
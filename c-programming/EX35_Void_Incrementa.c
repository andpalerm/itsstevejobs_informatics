#include <stdio.h>

void incrementa(int *num) {
    (*num)++;
}

int main() {
    int valore = 5;
    printf("Valore prima dell'incremento: %d\n", valore);
    incrementa(&valore);
    printf("Valore dopo l'incremento: %d\n", valore);
    return 0;
}
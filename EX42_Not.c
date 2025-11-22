#include <stdio.h>

int main() {
    int array[] = {3, 7, 10, 15, 20};
    int n = 5;
    int valore = 10;
    int trovato = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] == valore) {
            trovato = 1;
            break;
        }
    }

    if (!trovato) {  
        printf("Il valore %d NON e' presente nell'array.\n", valore);
    } else {
        printf("Il valore %d e' presente nell'array.\n", valore);
    }

    return 0;
}
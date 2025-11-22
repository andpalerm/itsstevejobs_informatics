#include <stdio.h>

int main() {
    
    int arrayN[] = {2, 4, 6, 2, 3, 4, 1, 1, 6};
    int arrayZ[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 9;
    int k = 0;

    printf("Array originale:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrayN[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        int trovato = 0;
        for (int j = 0; j < k; j++) {
            if (arrayN[i] == arrayZ[j]) {
                trovato = 1;
                break;
            }
        }
        if (!trovato) {
            arrayZ[k] = arrayN[i];
            k++;
        }
    }
    printf("Array senza duplicati:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", arrayZ[i]);
    }
}
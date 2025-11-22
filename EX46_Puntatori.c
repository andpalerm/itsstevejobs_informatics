#include <stdio.h>

void incrementa(int *num) {
    (*num)++;
    printf("Indirizzo di memoria all'interno della funzione: %p\n", (void*)num);
}
int main() {
    int valore = 10;
    printf("Valore iniziale: %d\n", valore);
    printf("Indirizzo di memoria prima della funzione: %p\n", (void*)&valore);
    
    incrementa(&valore);
    
    printf("Valore dopo l'incremento: %d\n", valore);
    return 0;
}
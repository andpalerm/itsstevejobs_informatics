#include <stdio.h>

int incrementa(int num) {
    return num + 1;
}

int main() {
    int num = 5;
    printf("Valore prima dell'incremento: %d\n", num);
    num = incrementa(num);
    printf("Valore dopo l'incremento: %d\n", num);
    return 0;
}
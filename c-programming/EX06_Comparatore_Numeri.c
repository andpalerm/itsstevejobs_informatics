#include <stdio.h>

int main() {

    int num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("\nIl primo numero (%d) e' maggiore del secondo (%d).\n", num1, num2);
    } else if (num1 < num2) {
        printf("\nIl secondo numero (%d) e' maggiore del primo (%d).\n", num2, num1);
    } else {
        printf("\nI due numeri sono uguali (%d).\n", num1);
    }
}
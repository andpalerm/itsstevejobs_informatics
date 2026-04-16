#include <stdio.h>

void incrementa(int *num1, int *num2, int *somma) {
    *somma = *num1 + *num2;
    printf("\nLa somma di %d e %d è: %d\n", *num1, *num2, *somma);
}
int main() {
    int num1, num2, somma = 0;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &num2);

    incrementa(&num1, &num2, &somma);

    return 0;
}
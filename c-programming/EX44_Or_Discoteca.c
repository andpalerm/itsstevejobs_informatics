#include <stdio.h>

int main() {
    int age;
    char sex;
    int flag = 0;

    printf("Inserisci la tua età: ");
    scanf("%d", &age);
    printf("\nInserisci il sesso (M/F): ");
    scanf(" %c", &sex); // spazio per ignorare newline

    if (sex == 'M' || sex == 'F') {
        flag = 1;
        if (age >= 18 || sex == 'F') {
            printf("\nAccesso consentito.\n");
        } else {
            printf("\nAccesso negato.\n");
        }
    } else {
        flag = 0;
        printf("\nERRORE: Input non valido.\n");
    }

    return 0;
}
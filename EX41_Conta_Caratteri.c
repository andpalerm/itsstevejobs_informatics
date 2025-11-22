#include <stdio.h>
#include <string.h>

void lunghezzaStringa(char stringa[]) {
    int lunghezza = strlen(stringa);
    printf("\nLa lunghezza della stringa e': %d\n", lunghezza);
}

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    fgets(stringa, sizeof(stringa), stdin);
    stringa[strcspn(stringa, "\n")] = '\0';

    lunghezzaStringa(stringa);

    return 0;
}
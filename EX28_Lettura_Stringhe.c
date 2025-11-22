#include <stdio.h>
#include <string.h>

int main() {
    char stringa[50];

    printf("Inserisci una stringa: ");
    fgets(stringa, 50, stdin);
    stringa[strcspn(stringa, "\n")] = '\0';

    printf("\nLa stringa inserita e': %s\n", stringa);
    return 0;
}
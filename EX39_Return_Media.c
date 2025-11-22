#include <stdio.h>

int fmedia(int num1, int num2, int media) {
    return (num1 + num2) / 2;
}

int main() {
    int num1, num2;
    float media = 0;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &num2);

    media = fmedia(num1, num2, media);

    printf("\nMedia: %.2f\n", media);
    return 0;
}
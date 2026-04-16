#include <stdio.h>

int main() {

    int somma = 0;
    int numero = 0;

    for(int i = 0; i < 5; i++){
        printf("\nInserisci il %d° numero: ", i+1);
        scanf("%d", &numero);
        
        if(numero % 2 == 0){
            somma += numero;
        }
    }
    printf("\nLa somma dei numeri pari inseriti e': %d\n", somma);
    return 0;
}
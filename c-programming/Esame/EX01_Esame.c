#include <stdio.h>
#define DIM 1000

int main() {

    int vector[DIM] = {0};
    int num, i = 0;
    int MAX = 0, MIN = 0;
    int even = 0, odd = 0;
    int totale = 0, somma = 0;
    float media = 0;
    

    printf("Inserisci una sequenza di numeri interi (positivi, negativi e 0):\n");
    while (1) {
        scanf("%d", &num);
            if(num == 0) {
                break;
            }
            if(i < DIM) {
                vector[i] = num;
                somma += num;
                if(vector[i] > MAX) {
                    MAX = vector[i];
                }else if(vector[i] < MIN) {
                    MIN = vector[i];
                }
                if(vector[i] % 2 == 0) {
                    odd++;
                }else {
                    even++;
                }
                if(vector[i] != 0) {
                    totale++;
                }
                media = somma / totale;
            }            
            i++;
        }
    if(vector[0] != 0) {
        printf("Sono stati inseriti %d numeri!\n", totale);
        printf("\n-------------------------------------\n");
        printf("La somma dei numeri inseriti è: %d\n", somma);
        printf("La media dei numeri inseriti è: %.2f\n", media);
        printf("-------------------------------------\n");
        printf("Il numero massimo è: %d\n", MAX);
        printf("Il numero minimo è: %d\n", MIN);
        printf("-------------------------------------\n");
        printf("Sono stati inseriti %d numeri dispari!\n", even);
        printf("Sono stati inseriti %d numeri pari!\n", odd);
        printf("-------------------------------------\n");
    }else {
        printf("ERRORE: Nessun dato valido!\n");
    }
}
#include <stdio.h>

int main() {
  
    int somma = 0;

    for(int i = 0; i <= 100; i++){
        somma += i;
    }
    printf("La somma dei numeri da 0 a 100 e': %d\n", somma);
    return 0;
}
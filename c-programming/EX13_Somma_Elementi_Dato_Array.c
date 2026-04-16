#include <stdio.h>

int main() {

    int array[] = {23, 4, 16, 48, 37};
    int somma = 0;
    int dim = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < dim; i++){
        somma += array[i];
    }
    printf("La somma degli elementi dell'array e': %d\n", somma);
}
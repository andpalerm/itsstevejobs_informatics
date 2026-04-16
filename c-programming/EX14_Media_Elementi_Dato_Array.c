#include <stdio.h>

int main() {

    int array[] = {23, 4, 16, 48, 37};
    float media = 0;
    int dim = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < dim; i++){
        media += array[i];
    }
    media = media / dim;
    printf("La media degli elementi dell'array e': %.2f\n", media);
}
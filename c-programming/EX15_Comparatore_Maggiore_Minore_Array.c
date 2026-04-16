#include <stdio.h>

int main() {

    int array[] = {2, 4, 6, 8, 10};
    int dim = sizeof(array) / sizeof(array[0]);

    int maggiore = array[0];
    int minore = array[0];

    for(int i = 1; i < dim; i++){
        if(array[i] > maggiore){
            maggiore = array[i];
        }
        if(array[i] < minore){
            minore = array[i];
        }
    }
    printf("Il numero maggiore nell'array e': %d\n", maggiore);
    printf("Il numero minore nell'array e': %d\n", minore);
}
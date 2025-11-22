#include <stdio.h>
#include <string.h>

int main() {
    int arr[10];
    printf("L'array è grande: %zu bytes\n", sizeof(arr));
    printf("Numero degli elementi dell'array: %zu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}
#include <stdio.h>

int quadrato(int num) {
    return num * num;
}

int main() {
    int num = 5;
    printf("Valore base: %d\n", num);
    num = quadrato(num);
    printf("Valore quadratico: %d\n", num);
    return 0;
}
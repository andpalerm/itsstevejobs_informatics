#include <stdio.h>

float calcola_media(float temp[], int N) {
    float somma = 0;
    for(int i = 0; i < N; i++) {
        somma += temp[i];
    }
    return somma / N;
}
float trova_massimo(float temp[], int N) {
    float MAX = temp[0];
    for(int i = 1; i < N; i++) {
        if(temp[i] > MAX) {
            MAX = temp[i];
        }
    }
    return MAX;
}

float trova_minimo(float temp[], int N){
    float MIN = temp[0];
    for(int i = 1; i < N; i++) {
        if(temp[i] < MIN) {
            MIN = temp[i];
        }
    }
    return MIN;
}

int conta_maggiori_di_media(float temp[], int N){
    float media = calcola_media(temp, N);
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(temp[i] > media) {
            count++;
        }
    }
    return count;
}

int main() {

    int N;
    printf("Inserire il numero di giorni (da 1 a 31): ");
    scanf("%d", &N);
    while(N < 1 || N > 31) {
        printf("ERRORE: Numero di giorni non valido! Riprova: ");
        scanf("%d", &N);
    }

    float temp[N];
    int celsius;

    printf("------------------------------------------\n");
    for(int i = 0; i < N; i++) {
        printf("Inserisci la temperatura del %d° giorno: ", i + 1);
        scanf("%d", &celsius);
        temp[i] = celsius;
    }
    printf("------------------------------------------\n");

    calcola_media(temp, N);
    trova_massimo(temp, N);
    trova_minimo(temp, N);
    conta_maggiori_di_media(temp, N);

    printf("La media delle temperature è: %.2f\n", calcola_media(temp, N));
    printf("------------------------------------------\n");
    printf("La temperatura massima è: %.2f\n", trova_massimo(temp, N));
    printf("La temperatura minima è: %.2f\n", trova_minimo(temp, N));
    printf("------------------------------------------\n");
    printf("Il numero di giorni con temperatura maggiore della media è: %d\n", conta_maggiori_di_media(temp, N));
    printf("-------------------FINE-------------------\n");
}
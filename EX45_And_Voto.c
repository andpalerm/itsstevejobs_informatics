#include <stdio.h>

int main(){

    int voto;
    int condotta;

    printf("Inserisci il voto (1-10): ");
    scanf("%d", &voto);

    printf("\nInserisci la condotta (1-10): ");
    scanf("%d", &condotta);

    if(voto >= 6 && condotta >= 7){
        printf("\nPromosso.\n");
    } else {
        printf("\nBocciato.\n");
    }
    return 0;
}
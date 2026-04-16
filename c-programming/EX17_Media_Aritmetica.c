#include <stdio.h>
int main() {
  
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    int somma = 0, media;
    
    for (i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i + 1);
      scanf("%d", &v[i]);
      somma += v[i];
    }
    
    media = somma / N;
    printf("\nLa media dei numeri è: %d", media);
    
}
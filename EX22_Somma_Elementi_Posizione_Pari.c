#include <stdio.h>
int main()
{
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    int somma;
    
    for(i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i+1);
      scanf("%d", &v[i]);
    }
    
    for(i = 0; i < N; i++) {
      if(i % 2 == 0) {
        somma += v[i];
      }
    }
    printf("\nLa somma dei valori in posizione pari è: %d", somma);
    
    return 0;
}
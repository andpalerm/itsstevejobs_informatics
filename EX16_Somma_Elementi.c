#include <stdio.h>
#define N 10
int main()
{
  int v[N];
  int somma = 0;
  int i;
  
  printf("--- Inserisci %d numeri ---\n", N);
  for (i = 0; i < N; i++) {
    printf("Inserisci il %d° numero:\n", i+1);
    scanf("%d", &v[i]);
    somma += v[i];
  }
    printf("\n\nLa somma totale dei numeri nell'array è: %d", somma);
}

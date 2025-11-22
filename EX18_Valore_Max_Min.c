#include <stdio.h>
int main() {
  
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    
    for(i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i+1);
      scanf("%d", &v[i]);
    }
    
    int max = v[0];
    int min = v[0];
    
    for(i = 1; i < N; i++) {
      if (v[i] > max)
        max = v[i];
      if (v[i] < min)
        min = v[i];
    }
    printf("Il numero massimo è %d\n", max);
    printf("Il numero minimo è %d\n", min);
}
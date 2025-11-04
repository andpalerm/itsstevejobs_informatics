#include <stdio.h>

int main() {
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    int conta_pari, conta_dispari;
    
    for(i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i+1);
      scanf("%d", &v[i]);
    }
    
    for(i = 0; i < N; i++) {
      if (v[i] % 2 == 0) {
        conta_pari++;
      }else{
        conta_dispari++;
      }
    }
    printf("\nNumeri pari: %d", conta_pari);
    printf("\nNumeri dispari: %d", conta_dispari);
}
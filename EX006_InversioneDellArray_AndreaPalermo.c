#include <stdio.h>
int main()
{
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    
    for(i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i+1);
      scanf("%d", &v[i]);
    }
    
    printf("\nQuesto è l'Array in ordine inverso:\n\n");
    for(i = N-1; i >= 0; i--) {
      printf("%d \n", v[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int N;
    printf("Quanti numeri vuoi inserire? \n\n");
    scanf("%d", &N);
    
    int v[N];
    int i;
    int num, found;
    
    for(i = 0; i < N; i++) {
      printf("Inserisci il %d° numero: \n", i+1);
      scanf("%d", &v[i]);
    }
    
    printf("\nDimmi un numero: \n");
    scanf("%d", &num);
    for(i = 0; i < N; i++) {
      if(v[i] == num) {
        found = 1;
        break;
      }
    }
    if(found) {
        printf("\nIl numero %d è presente nell'Array", num);
      }else{
        printf("\nIl numero %d non è presente nell'Array", num);
      }
}
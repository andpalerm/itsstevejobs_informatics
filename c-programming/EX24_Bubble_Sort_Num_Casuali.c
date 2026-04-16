#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6

int main(){
  int a[N];
  int i, j, tmp;
  int max = 300;
  int min = 100;
  srand(time(NULL));

  printf("---- Valori random: ----\n");
  for(i=0; i<N; i++){
    a[i]=rand()%(max-min+1)+min;
    printf("a[%d] = %d\n", i, a[i]);
  }
  for(i = 0; i< N-1; i++){
    for(j=0; j< N-1; j++){
      if(a[j]>a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
  
  printf("---- Array ordinato: ---- \n");
  for(int i=0; i<N; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
return 0;
}
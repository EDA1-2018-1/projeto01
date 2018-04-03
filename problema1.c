/*
  Érico Bandeira - 16/0070287
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(int argc, char *argv[]) {
  double ENTRADAS[MAX], PESOS[MAX], T, SOMAP = 0;
  int i, *resultado;
  printf("Digite 10 números de entrada: ");
  for(i = 0; i < MAX; i++){
    scanf("%lf", &ENTRADAS[i]);
  }
  printf("Digite 10 números de pesos: ");
  for(i = 0; i < MAX; i++){
    scanf("%lf", &PESOS[i]);
  }
  printf("Digite o valor do limiar T: ");
  scanf("%lf", &T);
  fneuronio(ENTRADAS,   gitPESOS, T, SOMAP, MAX, resultado);

  printf("VAI TOMAR NO CU %lf %d", SOMAP, *resultado);
  return 0;
}

void fneuronio(double *ENTRADAS, double *PESOS, double T, double SOMAP, int N, int *resultado){
  int k;
  for(k = 0 ; k < N ; k++){
    SOMAP+=ENTRADAS[k]*PESOS[k];
    printf("%lf", SOMAP);
  }
  if(SOMAP < T){
    *resultado = 0;
  }
  else{
    *resultado = 1;
  }
}

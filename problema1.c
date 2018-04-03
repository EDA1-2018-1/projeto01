/*
  Érico Bandeira - 16/0070287
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

void fneuronio(double *, double *, double, double , int, int *);

int main() {
  double ENTRADAS[MAX], PESOS[MAX], SOMAP = 0;
  double T;
  int i, *resultado;
  printf("Digite 4 números de entrada: \n");
  for(i = 0; i < MAX; i++){
    scanf("%lf", &ENTRADAS[i]);
  }
  printf("Digite 4 números de pesos: \n");
  for(i = 0; i < MAX; i++){
    scanf("%lf", &PESOS[i]);
  }
  printf("Digite o valor do limiar T: ");
  scanf("%lf",&T);


  fneuronio(ENTRADAS, PESOS, T, SOMAP, MAX, resultado);

  printf("SOMAP %.2lf \n RESULTADO %d \n", SOMAP, resultado);
  return 0;
}

void fneuronio(double *ENTRADAS, double *PESOS, double T, double SOMAP, int N, int *resultado){
  int k;
  for(k = 0 ; k < N ; k++){
    SOMAP+=ENTRADAS[k]*PESOS[k];
    printf("%lf", SOMAP);
  }
  if(SOMAP < T){
    resultado = 0;
  }
  else{
    resultado = 1;
  }
}

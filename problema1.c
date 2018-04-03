/*
  Érico Bandeira - 16/0070287
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main() {
  float ENTRADAS[MAX], PESOS[MAX], T;
  int i;
  printf("Digite 10 números reais: ");
  for(i = 0; i < MAX; i++){
    scanf("%f", &ENTRADAS[i]);
  }
  printf("Digite o valor do limiar T: ");
  scanf("%f", T);
  fneuronio();
  return 0;
}

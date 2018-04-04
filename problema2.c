/*
  Érico Bandeira -
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define Max 10

void recebe_notas (int *, int);

int main() {
double NOTAS [MAX];
int i, APR[]*;

printf("Digite 10 números de notas: \n");
for(i = 0; i < MAX; i++){
  scanf("%lf", &NOTAS[i]);
}

  return 0;
}

void recebe_notas (double *NOTAS [MAX], int){
  int APR [MAX];
  int k;

  for(k = 0 ; k < MAX ; k++){

    if(NOTAS[k] >= 6){
      *APR[k] = 1;
    }
    else{
      *APR[k] = 0;
    }
  }
}

/*
  Érico Bandeira - 16/0070287
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

//Funções
void recebe_notas (double *, int, int *);
void conta_notas (int *, int, int *, int *);

//Main
int main() {

double NOTAS[MAX];
int i, j, APR[MAX];
int *aprovados, *reprovados;

printf("Digite a nota de 10 alunos: \n");
for(i = 0; i < MAX; i++){
  scanf("%lf", &NOTAS[i]);
}


recebe_notas(NOTAS, MAX, APR);
conta_notas(APR, MAX, &aprovados, &reprovados);

printf("Aprovados: %d\n", aprovados);
printf("Reprovados: %d\n", reprovados);

  return 0;
}

//Funções again
void recebe_notas (double *NOTAS, int Num, int *APR){
  int k;

  for(k = 0 ; k < Num ; k++){
    if(NOTAS[k] >= 6){
      APR[k] = 1;
    }
    else{
      APR[k] = 0;
    }
  }
}

void conta_notas (int *APR, int Num, int *aprovados, int *reprovados){
  int j = 0, contaprovados = 0, contreprovados = 0;

  for(j = 0; j < Num; ++j){
    if (!(APR[j])){
      contreprovados ++;
    }
    else{
      contaprovados ++;
    }
  }
  *aprovados = contaprovados;
  *reprovados = contreprovados;
}

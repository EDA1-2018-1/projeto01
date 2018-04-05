/*
  Érico Bandeira -
  Luciana Ribeiro Lins de Albuquerque - 15/0016131
  Max Henrique Barbosa - 16/0047013

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//Funções
void recebe_notas (double *, int *);
void conta_notas (int);


//Main
int main() {

double NOTAS[MAX];
int i, APR[MAX];

printf("Digite a nota de 10 alunos: \n");
for(i = 0; i < MAX; i++){
  scanf("%lf", &NOTAS[i]);
}

recebe_notas(NOTAS, &APR);
printf("%d  \n", APR);

conta_notas(APR, &aprovados, &reprovados);
printf("%d  \n", aprovados);
printf("%d  \n", reprovados);

  return 0;
}

//Funções again
void recebe_notas (double *NOTAS, int *APR){
  int k;

  for(k = 0 ; k < MAX ; k++){
    if(NOTAS[k] >= 6){
      APR[k] = 1;
    }
    else{
      APR[k] = 0;
    }
  }
}

void conta_notas (int APR [MAX], int *aprovados, int *reprovados){
  //int aprovados, reprovados;
  int j = 0;

  for(j = 0; j < MAX; ++j){
    if (APR[j] = 0){
      reprovados ++;
    }
    else (APR[j] = 1){
      aprovados ++;
    }
  }
}

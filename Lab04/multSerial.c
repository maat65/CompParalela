#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // Matriz
int x[3] = {1,2,3}; // Vetor
int y[3]; // Resultado da multiplicação

void mult(){
    for (int i=0; i<3; i++){
        y[i] = 0;
        for (int j=0; j<3; j++){
            y[i] += A[i][j] * x[j];
        }
    }
}

void printMatriz(int A[3][3]){
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++)
      printf("[%d]", A[i][j]);
    printf("\n");
  }
  printf("\n");
}

void printVetor(int x[3]){
  for (int i=0; i<3; i++)
    printf("[%d] ", x[i]);
  printf("\n\n");
}

void printResultado(int y[3]){
  for (int i=0; i<3; i++)
    printf("[%d] ", y[i]);
  printf("\n");
}

int main(){
  double time_spent = 0.0;
  clock_t begin = clock();
  printf("Print matriz:\n");
  printMatriz(A);
  printf("Print vetor:\n");
  printVetor(x);
  multi();
  printf("Resultado da multiplicação matriz-vetor:\n");
  printResultado(y);
  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\nTempo de execução é de %f segundos", time_spent);
 
  return 0;
}
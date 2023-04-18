#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>


int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
int x[3] = {1,2,3};
int y[3];

void *mult(void *arg) {
    long inicio = (long) arg;
    for (int i=inicio; i<inicio+2; i++) {
        y[i] = 0;
        for (int j=0; j<3; j++) {
            y[i] += A[i][j] * x[j];
        }
    }
    return NULL;
}

void printMatriz(int A[3][3]){
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++)
      printf("%d ", A[i][j]);
    printf("\n");
  }
  printf("\n");
}

void printVetor(int x[3]){
  for (int i=0; i<3; i++)
    printf("%d ", x[i]);
  printf("\n\n");
}

void printResultado(int y[3]){
  for (int i=0; i<3; i++)
    printf("%d ", y[i]);
  printf("\n");
}

int main() {
  double time_spent = 0.0;
  clock_t begin = clock();
  printf("Print matriz:\n");
  printMatriz(A);
  printf("Print vetor:\n");
  printVetor(x);

  pthread_t thread1, thread2;
  long inicio1 = 0;
  long inicio2 = 2;

  pthread_create(&thread1, NULL, mult, (void *) inicio1);
  pthread_create(&thread2, NULL, mult, (void *) inicio2);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  printf("Resultado da multiplicação matriz-vetor:\n");
  printResultado(y);
  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\nTempo de execução é de %f segundos", time_spent);
 
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void modulo(int matriz[TAM][TAM]){
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      matriz[i][j] = abs(matriz[i][j]);
    }
  }
}

void printMatriz(int matriz[TAM][TAM]){
  int i, j;
  for(i=0; i<TAM; i++) {
      for(j=0; j<TAM; j++) {
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }
}

int main() {
  int matriz[TAM][TAM] = {{5,-7,1}, {9,5,-9}, {-6,5,-8}}, i, j;
  printf("\nMatriz original:\n");
  printMatriz(matriz);
  // Chama a função modulo
  modulo(matriz);
  printf("\nMatriz em módulo:\n");
  printMatriz(matriz);
}
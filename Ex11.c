#include <stdio.h>

#define TAM 3

void multL1L2(int matriz[TAM][TAM]){
  for (int i = 0; i<TAM; i++)
		  matriz[1][i] = matriz[0][i] * matriz[1][i];
}

void somaL1L2(int matriz[TAM][TAM]){
  for(int j=0;j<TAM;j++)
		  matriz[1][j] = matriz[0][j] + matriz[1][j];
}

int main(){
	int matriz[TAM][TAM] = {{5,7,1}, {9,5,9}, {6,5,8}}, i, j, opcao;
  
  printf("\nMatriz original inteira:\n");
  for(i=0; i<TAM; i++) {
      for(j=0; j<TAM; j++) {
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }

  printf("Escolha se você quer somar(0) ou multiplicar(1): ");
  scanf("%d", &opcao);

  if(opcao == 0){
    somaL1L2(matriz);
  } 

  else if(opcao == 1){
    multL1L2(matriz);
  }

  printf("\nMatriz após a multiplicação:\n");
  for(i=0; i<TAM; i++) {
      for(j=0; j<TAM; j++) {
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }
}
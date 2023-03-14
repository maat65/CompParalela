#include <stdio.h>

#define TAM 3

int main(){
	int matriz[TAM][TAM] = {{1,2,3}, {4,5,6}, {7,8,9}}, mult, i, j, opcao, linha, coluna;
  
  printf("\nMatriz original inteira:\n");
  for(i=0; i<TAM; i++) {
      for(j=0; j<TAM; j++) {
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }

  printf("Escolha se você quer multiplicar uma linha(0) ou uma coluna(1): ");
  scanf("%d", &opcao);

  if(opcao == 0){
    printf("Qual linha você deseja multiplicar sabendo que a primeira linha é 1? ");
    scanf("%d", &linha);
    printf("Por quanto você deseja multiplicar a linha? ");
    scanf("%d", &mult);
    for (int i = 0; i<TAM; i++)
		  matriz[linha-1][i] = matriz[linha-1][i]*mult;
  }  

  else if(opcao == 1){
    printf("Qual coluna você deseja multiplicar sabendo que a primeira coluna é 1? ");
    scanf("%d", &coluna);
    printf("Por quanto você deseja multiplicar a coluna? ");
    scanf("%d", &mult);
    for(int j=0;j<TAM;j++)
		  matriz[j][coluna-1] = matriz[j][coluna-1]*mult;
  }

  printf("\nMatriz após a multiplicação:\n");
  for(i=0; i<TAM; i++) {
      for(j=0; j<TAM; j++) {
          printf("%d ", matriz[i][j]);
      }
      printf("\n");
  }
}
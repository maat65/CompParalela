#include <stdio.h>

#define TAM 3

int main(){
  int matriz[TAM][TAM] = {{5,7,1}, {9,5,9}, {6,5,8}};
  int menor = 100;
  int linha;
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(matriz[i][j] < menor){
        menor = matriz[i][j];
        linha = i;
      }
    }
  }
  printf("O menor número da matriz é %d e está na linha %d", menor, linha);
}
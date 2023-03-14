#include <stdio.h>

#define TAM 100

void removeLetra(char str[], int posicao){
  if(posicao >= 0 && posicao < TAM){
    for(int i = posicao-1; i < TAM; i++)
      str[i] = str[i+1];
    str[TAM] = '\0';
  }
}

int main(){
  char str[TAM] = "Mateus";
  int posicao = 6;
  printf("A letra na posição %d foi removida.\n", posicao);
  removeLetra(str, posicao);
  printf("%s", str);
  
}
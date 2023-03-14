#include <stdio.h>

#define TAM 100

void insereLetra(char str[], int posicao, char letra){
  if(posicao >= 0 && posicao < TAM){
    for(int i = TAM; i > posicao; i--)
      str[i] = str[i-1];
    str[posicao] = letra;
  }
}

int main(){
  char str[TAM] = "Mateus";
  int posicao = 4;
  char letra = 'h';
  printf("A letra %c foi inserida na posição %d.\n", letra, posicao);
  insereLetra(str, posicao, letra);
  printf("%s", str);
  
}
#include <stdio.h>

int buscarPosicao(char *str, char letra){
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] ==  letra)
      return i+1;
  }
  printf("Letra não encontrada.");
}

int main(){
  char *str = "Mateus";
  char letra = 'e';
  printf("A letra %c está na posição %d.", letra, buscarPosicao(str, letra));
  
}
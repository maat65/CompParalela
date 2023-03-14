#include <stdio.h>

int main(){
  int tam, j;
  printf("Digite um número ímpar: ");
  scanf("%d", &tam);
  if(tam % 2 == 0){
    printf("Erro! O número digitado não é ímpar!");
    return 0;
  }
  for (int i = 0;i < tam;i++) {
      for (j = 0;j < i;j++) {
          printf("  ");
      }
      for (j;j < tam - i;j++) {
          printf(" %d", j + 1);
      }
      printf("\n");
    }
}
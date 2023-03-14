#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
  char nome1[TAM], nome2[TAM];
  printf("Digite o nome da primeira pessoa: ");
  scanf("%s", nome1);
  printf("Digite o nome da segunda pessoa: ");
  scanf("%s", nome2);

  int var = strcmp(nome1, nome2);

  if(var == 0)
    printf("As duas palavras inseridas são iguais");
  else if(var > 0)
    printf("\n%s\n%s", nome2, nome1);
  else
    printf("\n%s\n%s", nome1, nome2);
}
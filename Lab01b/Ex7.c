#include <stdio.h>

struct pessoa{
  int idade;
  float peso, altura;
};


int main(){
  struct pessoa pessoa[3];
  for(int i = 0; i < 3; i++){
    printf("Digite a idade da pessoa %d: ", i+1);
    scanf("%d", &pessoa[i].idade);
    printf("Digite o peso da pessoa %d: ", i+1);
    scanf("%f", &pessoa[i].peso);
    printf("Digite a altura da pessoa %d: ", i+1);
    scanf("%f", &pessoa[i].altura);
    printf("\n");
  }
  for(int i = 0; i < 3; i++){
    printf("\nPessoa %d\n", i+1);
    printf("A pessoa %d tem %d anos\n", i+1, pessoa[i].idade);
    printf("A pessoa %d tem %f kg\n", i+1, pessoa[i].peso);
    printf("A pessoa %d tem %f m\n", i+1, pessoa[i].altura);
    printf("\n");
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER 256

int main(void)
{
  int aux1, aux2, aux3; /* Variáveis para armazenar a conta */
  int i, num, j, x; /* Variáveis */
  int fd[2]; /* File descriptors pro Pipe*/
  pid_t pid; /* Variável para armazenar o pid*/
  printf("Insira o número : ");
  scanf("%d", &num);
  j = num;
  int aux = j/2;

  /* Criando o Pipe */
  if(pipe(fd)<0) {
    perror("pipe") ;
    return -1 ;
  }
  
  pid = fork();
  /* Caso dê erro */
  if (pid == -1){
    perror("Erro");
    exit(1);
  }
  /* Processo Pai*/
  if (pid > 0){
    close(fd[0]);
    for(i = 1; j > aux; j--)
      i = i * j;
    write(fd[1], &i, sizeof(i));
    exit(0);
  }
  /* Processo Filho*/
  else{
    close(fd[1]);
    for(x = 1; aux > 1; aux--)
      x = x * aux;
    read(fd[0], &aux2, sizeof(aux2));
    printf("The factorial of %d is %d\n",num, x * aux2);
    exit(0);
  }
  //printf("The factorial of %d is %d\n",num, x * aux2);
}
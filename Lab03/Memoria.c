#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
  int shmID, *valor;
  int size = 1024;
  pid_t pid; /* Variável para armazenar o pid*/ 

  shmID = shmget(IPC_PRIVATE, size, IPC_CREAT | 0666);
  valor = shmat(shmID, NULL, 0);
  *valor = 1;
  
  if (shmID == -1) {
    perror("shmget");
    exit(1);
  }

  pid = fork();
  /* Caso dê erro */
  if (pid == -1){
    perror("Erro");
    exit(1);
  }
  /* Processo filho soma 2 no valor */
  else if(pid == 0){
    printf("Valor inicial: %d\n", *valor);
    *valor = *valor + 2;
    printf("Valor após processo filho: %d\n", *valor);
  }
  /* Processo pai multiplica 4 no valor */
  else if(pid > 0){
    wait(NULL);
    *valor = *valor * 4;
    printf("Valor após processo pai: %d\n", *valor);
  }
}
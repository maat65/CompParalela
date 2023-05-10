# Exercício 04 - Decomposição de tarefas

# 1-) Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.

![image](https://github.com/maat65/CompParalela/assets/83376070/736b433b-7042-4ce2-8e07-780318f20588)

Imagem de um exemplo usando duas threads

T1 = main
T2 = Thread 0, que irá fazer a conta dos números 0, 2, 4, 6, 8...
T3 = Thread 1, que irá fazer a conta dos números 1, 3, 5, 7, 9...
T4 = Irá somar o valor que as duas threads chegaram
T5 = Imprime o valor de Euler

# 2-) Qual é o limite inferior do tempo de execução paralela para cada decomposição?



# 3-) Quantos processadores são necessários para se conseguir o tempo mínimo de execução?

2

# 4-) Qual é o grau máximo de concorrência?

2

# 5-) Qual é o paralelismo médio?



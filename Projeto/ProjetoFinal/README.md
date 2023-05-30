# Projeto final


Como resolveram o problema:  descrição simples do algoritmo e estratégia de paralelismo adotada


  -O codigo feito foi para tentar encontrar a constante de euler com a maior precisão possível, usando a seguinte técnica de paralelismo. No ambiente AWS pelo que eu percebi e tentei testar, o máximo de 
threads que pode ser utilizado são duas, então cada thread foi separada dessa maneira: a primeira thread calcula os termos que possuem o índice ímpares, começando por 1/1!, 1/3!, 1/5!, e assim por diante e
guardará a soma desses valores todos em uma variável “aux”, já a segunda thread calcula os termos que possuem o índice pares, sendo eles 1/2!, 1/4!, 1/6! e assim por diante também, onde também guardará a
soma desses valores em uma variável “aux”. Após todas contas serem feitas e armazenadas em “aux”, na parte final do código terá o “#pragma omp critical”, que serve para que somente uma thread de cada vez
possa fazer o comando que se encontra dentro desse diretório, e dentro dele terá “mpf_add(euler, euler, aux)” que fará com que cada thread pegue sua variável “aux”, onde todo valor está armazenado, e some
em outra variável “euler”, que é onde estará o valor final de euler. E para que eu pudesse utilizar threads, usei a biblioteca "omp.h" que também possui o "#pragma omp critical" que também foi muito
importante para o funcionamento do código já que sua função é que todo código que se encontra dentro de seu diretório, faça com que apenas uma thread por cada vez possa entrar nele e executar o que é 
pedido nele, e para a realização de cálculos de melhor precisão foi usada a “gmp.h”, que também foi muito importante para que eu pudesse encontrar a constante euler com a melhor precisão possível.


Qual foi o speedup da última versão  e como eles fizeram para melhorar


  -Como já foi mostrado em entregas anteriores do projeto, o último teste feito com o código serial foi com um número de casas muito baixo, pois era muito lento, e comparando com o código paralelo o 
speedup foi de ≅ 1,18117


Considerações sobre a estratégia de paralelismo adotada e como isso auxiliou na escala do problema. 


  -Ao separar o problema em duas threads, foi possível notar uma grande melhora no tempo do paralelo comparado ao serial, já que cada conta feita no código foi separada em duas threads acelerando o 
processo de contas com números gigantes, onde foi necessário o uso do “#pragma omp critical” para que não houvesse nenhum problema de corrida durante a soma dos auxiliares.

# Testes finais

Com N = 20000 e precisão = 50000, teve 15064 digitos corretos

Com N = 20000 e precisão = 100000, teve 30110 digitos corretos em 4m39s

![image](https://github.com/maat65/CompParalela/assets/83376070/17c9feb4-97ab-4c1f-9f78-cc0c7f5c4cc0)

Com N = 30000 e precisão = 120000, teve 36121 digitos corretos em 16m53s

![image](https://github.com/maat65/CompParalela/assets/83376070/6490327f-e2bf-4bb2-9f85-c817fa611c50)

E por ultimo com N = 50000 e precisão = 200000, tivemos 60204 digitos corretos por aproximadamente 40-50m, porém o tempo mostrado na tela é de 21m58s, pois durante a execução, o tempo no ambiente AWS acabou quando estava esperando por cerca de 20-30m

![image](https://github.com/maat65/CompParalela/assets/83376070/01523a74-7e52-4032-9a3d-7137c2724e4d)

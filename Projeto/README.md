# Print - Projeto Serial
![image](https://user-images.githubusercontent.com/83376070/235526418-3c400e68-f713-4218-b508-159d641343cf.png)

# Print - Projeto Paralelo
Baixar biblioteca GMP com comando: sudo apt install libgmp-dev



Compilar com: gcc projParalelo.c -o projParalelo -fopenmp -lgmp


Teste com n = 10000

Speedup = serial / paralelo ≅ 22,6212


![image](https://user-images.githubusercontent.com/83376070/236942159-332a5aea-80d5-4688-ad77-1f6378d07b00.png)


# Print - Projeto Paralelov2

O tempo aumentou para 3.792s, porém agora funciona corretamente ao usar mais de uma thread.

Novo Speedup ≅ 1,18117


![image](https://github.com/maat65/CompParalela/assets/83376070/a8f5917e-2f4f-40eb-9a7a-5956a0f71abd)


# Testes finais

Com N = 20000 e precisão = 50000, teve 15064 digitos corretos

Com N = 20000 e precisão = 100000, teve 30110 digitos corretos em 4m39s

![image](https://github.com/maat65/CompParalela/assets/83376070/17c9feb4-97ab-4c1f-9f78-cc0c7f5c4cc0)

Com N = 30000 e precisão = 120000, teve 36121 digitos corretos em 16m53s

![image](https://github.com/maat65/CompParalela/assets/83376070/6490327f-e2bf-4bb2-9f85-c817fa611c50)



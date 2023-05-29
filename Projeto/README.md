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

Precisão = 50000 demorou cerca de 7 minutos

![image](https://github.com/maat65/CompParalela/assets/83376070/24ef37ac-feb1-481d-96cb-ef8f947b856f)

![image](https://github.com/maat65/CompParalela/assets/83376070/ff8e3906-6adb-4b7d-b7bf-1524e5b65e4d)

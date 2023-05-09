# Print - Projeto Serial
![image](https://user-images.githubusercontent.com/83376070/235526418-3c400e68-f713-4218-b508-159d641343cf.png)

# Print - Projeto Paralelo
Baixar biblioteca GMP com comando: sudo apt install libgmp-dev



Compilar com: gcc projParalelo.c -o projParalelo -fopenmp -lgmp


Teste com n = 10000

Speedup = serial / paralelo ≅ 22,6212


![image](https://user-images.githubusercontent.com/83376070/236942159-332a5aea-80d5-4688-ad77-1f6378d07b00.png)

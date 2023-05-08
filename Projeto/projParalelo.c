#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <gmp.h>

int main(int argc, char *argv[]) {
    int n = 10000; // número de termos da série de Taylor a serem calculados
    int thread_count = 1;

    mpf_set_default_prec(10000); // seta a precisão da quantidade de numeros decimais

    mpf_t euler;
    mpf_init_set_ui(euler, 0); // cria variavel euler em 0

    #pragma omp parallel num_threads(thread_count)
    {
        int my_rank = omp_get_thread_num(); // índice da thread atual
        int thread_count = omp_get_num_threads(); // número total de threads

        mpf_t aux;
        mpf_init_set_ui(aux,  0); // cria variavel aux em 0

        mpf_t fat;
        mpf_init_set_ui(fat, 1); // cria variavel fat em 1

        // loop i = i + thread_count para cada thread calcular conjunto de termos diferentes e ser mais rapido
        for (int i = my_rank + 1; i <= n; i += thread_count) {
            mpf_ui_div(aux, 1, fat); // calcula 1/fat e armazena em aux
            mpf_add(euler, euler, aux); // euler += aux
            if(i < n)
                 mpf_mul_ui(fat, fat, i); // atualiza o valor de fat multiplicando por i a cada iteração
        }

        mpf_clears(aux, fat, NULL); // limpa as variáveis aux e fat
    }

    gmp_printf("Euler = %.3500Ff\n", euler); // imprime o valor final de euler

    mpf_clear(euler); // limpa a variável euler

    return 0;
}
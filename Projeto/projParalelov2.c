#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <gmp.h>

int main(int argc, char *argv[]) {
    int n = 10000; // número de termos da série de Taylor a serem calculados
    int thread_count = 4;

    mpf_set_default_prec(10000); // seta a precisão da quantidade de numeros decimais

    mpf_t euler;
    mpf_init_set_ui(euler, 1); // cria variavel euler em 1

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
            mpf_t termo_i;
            mpf_init_set_ui(termo_i, 1);
            for (int j = 1; j <= i; j++) {
                mpf_mul_ui(termo_i, termo_i, j); // atualiza o valor de termo_i multiplicando por j a cada iteração
            }
            mpf_ui_div(termo_i, 1, termo_i); // calcula 1/termo_i e armazena em termo_i
            mpf_add(aux, aux, termo_i); // aux += termo_i
            mpf_clear(termo_i); // libera a variavel termo_i
        }

        #pragma omp critical
        {
            mpf_add(euler, euler, aux); // euler += aux
        }

        mpf_clears(aux, fat, NULL); // libera as variáveis aux e fat
    }

    gmp_printf("Euler = %.3500Ff\n", euler); // imprime o valor final de euler

    mpf_clear(euler); // libera a variável euler

    return 0;
}
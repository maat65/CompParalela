#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM] = {{5,7,1}, {9,5,9}, {6,5,8}}, transposta[TAM][TAM], linhas, colunas, i, j;

    // Faz a tranposta da matriz
    for(i=0; i<TAM; i++) {
        for(j=0; j<TAM; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz original:\n");
    for(i=0; i<TAM; i++) {
        for(j=0; j<TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposta da matriz:\n");
    for(i=0; i<TAM; i++) {
        for(j=0; j<TAM; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
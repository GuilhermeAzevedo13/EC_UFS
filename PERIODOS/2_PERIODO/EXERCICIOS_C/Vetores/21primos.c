#include <stdio.h>
#include <stdlib.h>

void selection_sort(int vetor[], int max) {
    int i, j, indiceMenorValor, aux;

    for (i = 0; i < (max - 1); i++) {
        /* Encontra o índice do menor valor restante no vetor */
        indiceMenorValor = i;
        for (j = i + 1; j < max; j++) {
            if (vetor[j] < vetor[indiceMenorValor]) {
                indiceMenorValor = j;
            }
        }

        /* Se o índice do menor valor for diferente do índice do i-ésimo número não ordenado,
        faz-se a troca dos valores */
        if (i != indiceMenorValor) {
            aux = vetor[i];
            vetor[i] = vetor[indiceMenorValor];
            vetor[indiceMenorValor] = aux;
        }
    }

    /* Imprime o vetor ordenado */
    for (i = 0; i < max; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int num_threads = 0; // Contar numero de threads

typedef struct {
    int inicio;
    int fim;
    unsigned long long int resultado;
} Thread;

void *fatorial_calcular(void *param);

int main (int argc, char *argv[]) {

    int N = 1000000;
    pthread_t tid1, tid2; // Identificadores dos threads na memória
    pthread_attr_t attr; /* definição de atributos do thread */
    Thread data1, data2;
    unsigned long long int resultado_final;

    // Divisão de tarefas
    int mid = N / 2;

    data1.inicio = 1;
    data1.fim = mid;
    data1.resultado = 1;

    data2.inicio = mid + 1;
    data2.fim = N;
    data2.resultado = 1;

    pthread_attr_init(&attr); // Inicializa os atributos do thread

    // Cria os threads
    pthread_create(&tid1, &attr, fatorial_calcular, &data1);
    num_threads++;
    pthread_create(&tid2, &attr, fatorial_calcular, &data2);
    num_threads++;

    // Espera os threads acabarem
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    // Combina resultados
    resultado_final = data1.resultado * data2.resultado;

    printf("Fatorial de %d eh %llu\n", N, resultado_final);
    printf("Numero total de threads criados: %d\n", num_threads);

    return 0;
}

void *fatorial_calcular(void *param) {
    Thread *data = (Thread *)param;
    unsigned long long int i;

    for (i = data->inicio; i <= data->fim; i++) {
        data->resultado *= i;
    }

    printf("Thread calculou intervalo %d-%d, resultado: %llu\n", data->inicio, data->fim, data->resultado);

    pthread_exit(NULL);
}

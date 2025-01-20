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

    int N = 1000;
    pthread_t tid[11]; // Identificadores dos threads na memória
    pthread_attr_t attr; /* definição de atributos do thread */
    Thread data[11];
    unsigned long long int resultado_final;

    // Divisão de tarefas
    int i=1;
    int div = (N*0.1);
    while (i <= 10){

        if (i == 1){
            data[i].inicio = 1;
            data[i].fim = div;
            data[i].resultado = 1;
            i++;
        }else if (i == 2){
            data[i].inicio = 1 + div;
            data[i].fim = div*i;
            data[i].resultado = 1;
            i++;
        }else{
            data[i].inicio = 1 + div*(i-1);
            data[i].fim = div*i;
            data[i].resultado = 1;
            i++;
        }
    }
    
    pthread_attr_init(&attr); // Inicializa os atributos do thread

    // Cria os threads
    int x = 1;
    while (x<=10){
        pthread_create(&tid[x], &attr, fatorial_calcular, &data[x]);
        num_threads++;
        x++;
    }
    

    // Espera os threads acabarem
    for (int i = 1; i <= 10; i++) {
        pthread_join(tid[i], NULL);
    }

    // Combina resultados
    int y = 1;
    resultado_final = 1;
    for (int i = 1; i <= 10; i++) {
        resultado_final *= data[i].resultado;
    }

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

#include <stdio.h>
#define PROG2 45
#define PROG3 30

int main(){

    int *vet1, *vet2;

    vet1 = malloc(sizeof(int)*PROG2);
    vet2 = malloc(sizeof(int)*PROG3);

    PreencherVetor(vet1, vet2, PROG2, PROG3);

    int quant_repetidos = Repetidos(vet1, vet2, PROG2, PROG3);

    int *vet3;
    int aux = 0;

    vet3 = malloc(sizeof(int) * quant_repetidos);

    for(int i =0; i < PROG2; ++i){
        for(int j = 0; j < PROG3; ++j){
            if(*(vet1 + i) == *(vet2 + j)){
                *(vet3 + aux) = *(vet1 + i);
                aux++;
            }
        }
    }

    for(int i = 0; i < aux; ++i){
        printf("%d ", *(vet3 + i));
    }

    free(vet1);
    free(vet2);
    free(vet3);

    return 0;
}


void PreencherVetor(int *v, int *w, int tam, int tam2){

    for(int i = 0; i < tam; ++i){
        scanf("%d", v + i);
    }

    for(int i = 0; i < tam2; ++i){
        scanf("%d", w + i);
    }
}

int Repetidos(int *v, int *w, int tam, int tam2){
    
    int cont = 0;

    for(int i =0; i < tam; ++i){
        for(int j = 0; j < tam2; ++j){
            if(*(v + i) == *(w + j)){
                cont++;
            }
        }
    }
    return cont;
}



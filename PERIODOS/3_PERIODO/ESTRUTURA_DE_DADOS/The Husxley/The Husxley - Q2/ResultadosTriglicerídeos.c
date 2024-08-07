#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int RecebeValores(int **vet, int *c);
void Resultados(int *v, int *c, int *v_a);


int main(){

    int *vetor = NULL;
    vetor = malloc(sizeof(int));

    int *contador = NULL;
    contador = malloc(sizeof(int));
    *contador = RecebeValores(&vetor, contador);

    int *vet_aux = NULL;
    vet_aux = malloc(sizeof(int) * 4);
    Resultados(vetor, contador, vet_aux);

    float *vetor_porcentagem = NULL;
    vetor_porcentagem = malloc(sizeof(int) * 3);

    for(int i = 0; i < 3; ++i){
        *(vetor_porcentagem + i) = ((float)*(vet_aux + i)/ (float) vet_aux[3]) * 100;
    }

    printf("Desejavel: %d(%.1f%%)\n", vet_aux[0], vetor_porcentagem[0]);
    printf("Limitrofe: %d(%.1f%%)\n", vet_aux[1], vetor_porcentagem[1]);
    printf("Alto: %d(%.1f%%)\n", vet_aux[2], vetor_porcentagem[2]);
    if((float) vet_aux[2] >= (float)(vet_aux[3])/2){
        printf("Quantidade de ALTO acima do normal");
    }

    free(vetor);
    free(contador);
    free(vet_aux);
    free(vetor_porcentagem);

    return 0;
}


int RecebeValores(int **vet, int *c){

    char numero[100];
    *c = 0;

    while(strcmp(numero, "*") != 0){
        gets(numero);
        if(strcmp(numero, "*") != 0){
            (*c)++;
            *vet = realloc(*vet, sizeof(int) * (*c));
            (*vet)[(*c) - 1] = atoi(numero);
        }
    }

    return *c;
}


void Resultados(int *v, int *c, int *v_a){

    int quantidade_total = 0;
    int desejavel = 0;
    int limitrofe = 0;
    int alto = 0;

    for(int i = 0; i < *c; ++i){
        quantidade_total++;
        if(*(v + i) < 150){
            desejavel++;
        }else if(*(v + i) >= 150 && *(v + i) <= 200){
            limitrofe++;
        }else{
            alto++;
        }
    }

    v_a[0] = desejavel;
    v_a[1] = limitrofe;
    v_a[2] = alto;
    v_a[3] = quantidade_total;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void RecebeValores(int **v, int *c);
void OrdenaValores(int *v, int *tam);
int ValorMediana(int *v, int *tam);


int main(){

    int *vetor;
    vetor = malloc(sizeof(int));

    int *contador;
    contador = malloc(sizeof(int));

    RecebeValores(&vetor, contador);
    OrdenaValores(vetor, contador);
    ValorMediana(vetor, contador);

    free(vetor);
    free(contador);

    return 0;
}


void RecebeValores(int **v, int *c){

    *c = 0;
    int numero;
    char virgula = ',';
    
    while(virgula != '\n'){

        (*c)++;
        scanf("%d%c", &numero, &virgula);
        (*v)[(*c) - 1] = numero;
        *v = realloc(*v, sizeof(int) *((*c) + 1));

    }

}


void OrdenaValores(int *v, int *tam){

    int aux; 

    for(int i = 0; i < *tam; ++i){
        for(int j = 0; j < *tam; ++j){
            if(*(v + i) < *(v + j)){
                aux = *(v + i);
                *(v + i) = *(v + j);
                *(v + j) = aux;
            }
        }
    }
}


int ValorMediana(int *v, int *tam){

    int valor_minimo;
    int posicao_minimo;
    int valor_maximo;
    int posicao_maximo;

    scanf("%d%d", &valor_minimo, &valor_maximo);


    for(int i = 0; i < *tam; ++i){
        if(*(v + i) >= valor_minimo){
            posicao_minimo = i;
            break;
        }
    }

    for(int j = 0; j < *tam; ++j){
        if(*(v + j) <= valor_maximo){
            posicao_maximo = j;
        }
    }

    int tamanho_vetor_aux = (posicao_maximo - posicao_minimo) + 1;
    int vetor_aux[tamanho_vetor_aux];

    int k = 0;

    for(int i = posicao_minimo; i <= posicao_maximo; ++i){
        vetor_aux[k] = *(v + i);
        ++k;
    }

    for(int i = 0; i < tamanho_vetor_aux; ++i){
        if(i == tamanho_vetor_aux - 1){
            printf("%d", vetor_aux[i]);
        }else{
            printf("%d,", vetor_aux[i]);
        }
    }

    float resposta;

    if(tamanho_vetor_aux % 2 == 0){
        resposta = (float)((vetor_aux[(tamanho_vetor_aux / 2) - 1] + vetor_aux[tamanho_vetor_aux / 2]))/2;
    }else{
        resposta = vetor_aux[(int)(floor(tamanho_vetor_aux/2))];
    }

    return printf("\n%.2f", resposta);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void RecebeValores(int **valores, int *cont){
/*recebe um ponteiro para um ponteiro de inteiro (**valores) 
e um ponteiro para inteiro (*cont) como argumentos. A função 
lê uma sequência de números inteiros separados por vírgula da 
entrada do usuário e os armazena em um vetor dinamicamente alocado.*/

    *cont = 0; //A função começa atribuindo zero a *cont, que é um contador para o número de elementos no vetor.
    int numero;
    char virgula = ',';

    while(virgula != '\n'){
        (*cont)++;
        scanf("%d%c", &numero, &virgula);
        (*valores)[(*cont) - 1] = numero; //O valor de numero é então armazenado no vetor (*valores) 
                                          //na posição (*cont) - 1, pois os índices de vetor são baseados em zero.

        *valores = realloc(*valores, sizeof(int)*((*cont) + 1)); //É feito um redimensionamento do vetor utilizando 
                                                                 //a função realloc. O vetor (*valores) é realocado 
                                                                 //para ter o tamanho atualizado, que é igual a (*cont) + 1, 
                                                                 //multiplicado pelo tamanho de um inteiro.
    }
}


void OrdenaValores(int *valores, int *tamanho){

    int aux, i, j; 

    for(i = 0; i < *tamanho; ++i){
        for(j = 0; j < *tamanho; ++j){
            if(*(valores + i) < *(valores + j)){
                aux = *(valores + i);
                *(valores + i) = *(valores + j);
                *(valores + j) = aux;
            }
        }
    }
}

void ValoresMediana(int *valores, int *tamanho){

    int valor_min = 0, i =0, j = 0;
    int posicao_min = 0;
    int valor_max = 0;
    int posicao_max = 0;

    scanf("%d%d", &valor_min, &valor_max);

    for(i = 0; i < *tamanho; ++i){
        if(*(valores + i) >= valor_min){
            posicao_min = i;
            break;
        }
    }

    for(j = 0; j < *tamanho; ++j){
        if(*(valores + j) <= valor_max){
            posicao_max = j;
        }
    }

    int tamanho_vetor_aux = (posicao_max - posicao_min) + 1;
    int vetor_aux[tamanho_vetor_aux];

    int k = 0;

    for(i = posicao_min; i <= posicao_max; ++i){
        vetor_aux[k] = *(valores + i);
        ++k;
    }

    for(i = 0; i < tamanho_vetor_aux; ++i){
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

    printf("\n%.2f", resposta);

}

int main(void){

    int *vetor;
    vetor = malloc(sizeof(int));

    int *contador;
    contador = malloc(sizeof(int));

    RecebeValores(&vetor, contador);
    OrdenaValores(vetor, contador);
    ValoresMediana(vetor, contador);

    free(vetor);
    free(contador);
    return 0;
}
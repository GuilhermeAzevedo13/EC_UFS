#include <stdio.h>

void ReceberValores_Matriz(int **matriz, int ordem_matriz){

    int i;
    for(i = 0; i < ordem_matriz; i++){
        matriz[i] = malloc(sizeof(int)*ordem_matriz);
    }

    for(i = 0; i < ordem_matriz; i++){
        for(int j = 0; j < ordem_matriz; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

}

void MultiplicaMatriz(int **matriz, int *num, int ordem_matriz){

    for(int i = 0; i < ordem_matriz; ++i){
        for(int j = 0; j < ordem_matriz; ++j){
            matriz[i][j] = (*num) * matriz[i][j];
        }
    }
}

int main(){

    int N;
    scanf("%d", &N);

    int **matriz;
    matriz = malloc(sizeof(int*) * N);
    

    ReceberValores_Matriz(matriz, N);


    char *numero_Str;
    int *numero_int;
    numero_Str = malloc(sizeof(char) * 20);

    do{
        scanf("%s", numero_Str);
        if(strcmp(numero_Str, "*") != 0){
            numero_int = malloc(sizeof(int));
            *numero_int = atoi(numero_Str);
            MultiplicaMatriz(matriz, numero_int, N);
            
        }else{
            break;
        }
    }while(strcmp(numero_Str, "*") != 0);

    printf("\n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == N - 1){
                printf("%d", matriz[i][j]);
            }else{
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }


    free(matriz);
    free(numero_int);
    free(numero_Str);

    return 0;
}




/*Sobre a Função RecebeValores_Matriz:
    A função tem dois parâmetros: **matriz, um ponteiro para ponteiro de inteiro, e ordem_matriz, 
    matriz inteiro que representa a ordem da matriz quadrada.

    A primeira parte do código utiliza um loop for para alocar memória para cada linha da matriz. 

    A função malloc é usada para alocar um bloco  de memória com o tamanho necessário para armazenar 
    uma linha da matriz, multiplicando o tamanho de um inteiro pela ordem_matriz. O ponteiro retornado 
    por malloc é atribuído a matriz[i], ou seja, à i-ésima linha da matriz.

    Em seguida, há um loop aninhado que itera sobre cada linha e coluna da matriz. Dentro desse loop, 
    a função scanf é usada para ler um inteiro a partir da entrada do usuário e atribuí-lo ao elemento 
    correspondente matriz[i][j]. A função scanf recebe o endereço de memória onde o valor lido deve ser 
    armazenado, indicado por &matriz[i][j].

    No geral, essa função ReceberValores_Matriz permite que o usuário insira os valores dos elementos de 
    uma matriz quadrada, alocando a memória necessária para a matriz e preenchendo seus elementos com os 
    valores fornecidos.   
*/
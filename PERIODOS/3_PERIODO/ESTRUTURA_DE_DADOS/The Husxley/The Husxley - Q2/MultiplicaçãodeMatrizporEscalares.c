#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReceberValores(int **m, int n);
void MultiplicaMatriz(int **m, int *num, int n);


int main(){

    int N;
    scanf("%d", &N);

    int **matriz;
    matriz = malloc(sizeof(int*) * N);
    

    ReceberValores(matriz, N);


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


void ReceberValores(int **m, int n){

    int i;
    for(i = 0; i < n; i++){
        m[i] = malloc(sizeof(int)*n);
    }

    for(i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }

}


void MultiplicaMatriz(int **m, int *num, int n){

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            m[i][j] = (*num) * m[i][j];
        }
    }


}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ResultadoTriglicerideos(int *resultado, int aux){
    
    int cont_Desejavel = 0, cont_Limitrofe = 0, cont_Alto = 0, i = 0;

    for(i = 0; i < aux; i++){

        if(resultado[i] >= 0 && resultado[i] < 150){
            cont_Desejavel++;
        }else if(resultado[i] >= 150 && resultado[i] <= 200){
            cont_Limitrofe++;
        }else if(resultado[i] > 200){
            cont_Alto++;
        }
    }

    float porcentagem_Desejavel = (cont_Desejavel*100/(float) aux);
    float porcentagem_Limitrofe = (cont_Limitrofe*100/(float) aux);
    float porcentagem_Alto = (cont_Alto*100/(float) aux);
    

    printf("Desejavel: %d(%.1f%%)\n", cont_Desejavel, porcentagem_Desejavel);
    printf("Limitrofe: %d(%.1f%%)\n", cont_Limitrofe, porcentagem_Limitrofe);
    printf("Alto: %d(%.1f%%)\n", cont_Alto, porcentagem_Alto);

    if(porcentagem_Alto >= 50){
        printf("Quantidade de ALTO acima do normal");
    }
}


int main(void) {

    int *resultado = NULL, i = 0;
    resultado = malloc(sizeof(int));

    char entrada[10];
    while (scanf("%s", entrada)) {
        if (strcmp(entrada, "*") == 0) {
            break;
        }
        resultado[i] = atoi(entrada); //converte de Char para Inteiro
        i++;
        resultado = realloc(resultado, sizeof(int) * (i+1));
    }

    ResultadoTriglicerideos(resultado, i);

    free(resultado);
    return 0;
}
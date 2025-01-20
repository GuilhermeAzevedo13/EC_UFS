#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int lugares, onibus, kombi;
    
    //Recebendo informações
    printf("\n Digite a quantidade de pessoas que irão ao Evento: ");
    scanf("%d", &lugares);
    
    kombi = lugares/11;
    onibus = lugares%11;
    
    printf("\n A kombi irá precisar realizar %d viagens.", kombi);
    printf("\n Apenas %d pessoas precisarão pegar o transporte Coletivo.", onibus);
    
    return 0;
}

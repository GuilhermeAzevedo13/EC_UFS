#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo vari�veis
    int lugares, onibus, kombi;
    
    //Recebendo informa��es
    printf("\n Digite a quantidade de pessoas que ir�o ao Evento: ");
    scanf("%d", &lugares);
    
    kombi = lugares/11;
    onibus = lugares%11;
    
    printf("\n A kombi ir� precisar realizar %d viagens.", kombi);
    printf("\n Apenas %d pessoas precisar�o pegar o transporte Coletivo.", onibus);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== PADARIA PaO BaO ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int estoque, ideal, resultado;

    printf("Quantos pães em estoque: ");
    scanf("%d", &estoque);

    printf("A quantidade ideal de paes? ");
    scanf("%d", &ideal);

    resultado = ideal - estoque;

    printf("Você precisa comprar: %d paes.", resultado);
    return 0;
}

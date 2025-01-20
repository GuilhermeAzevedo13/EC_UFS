#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== FESTA DE ARROMBA ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int docinho, salgadinho, convidados, totaldocinhos, totalsalgadinhos;

    printf("\n Digite a quantidade de docinhos por pessoa: ");
    scanf("%d", &docinho);

    printf("\n Digite a quantidade de salgadinhos por pessoa: ");
    scanf("%d", &salgadinho);

    printf("\n Digite a quantidade de convidados: ");
    scanf("%d", &convidados);

    totaldocinhos = docinho * convidados;
    totalsalgadinhos = salgadinho * convidados;

    printf("\n Precisa comprar: %d docinhos.", totaldocinhos);
    printf("\n Precisa comprar: %d salgadinhos.", totalsalgadinhos);
    return 0;

}

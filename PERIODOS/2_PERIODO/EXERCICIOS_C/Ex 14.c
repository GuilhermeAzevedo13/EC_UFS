#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== PADARIA PaO BaO ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    int comprimidos, comp_caixa;
    double resultado;

    printf("\n Digite a quantidade de comprimidos por dia: ");
    scanf("%d", &comprimidos);

    printf("\n Digite a quantidade de comprimidos por caixa: ");
    scanf("%d", &comp_caixa);

    resultado = (comprimidos * 30)/comp_caixa;

    printf("\n Você precisará de %.2lf caixas por mês", resultado);
    return 0;
}

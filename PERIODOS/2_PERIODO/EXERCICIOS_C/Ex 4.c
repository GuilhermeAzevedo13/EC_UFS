#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("==== ESCOLA CAPIVARA FELIZ ====");

    printf("\n");

    //Para usar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis
    double valor, desconto, resultado;

    printf("\n Digite o valor do produto: R$ ");
    scanf("%lfd", &valor);

    printf("\n Digite o desconto: ");
    scanf("%lf", &desconto);

    resultado = valor *(1 - (desconto/100));

    printf("\n O valor final do produto será de R$ %.2lf", resultado);
    return 0;
}
